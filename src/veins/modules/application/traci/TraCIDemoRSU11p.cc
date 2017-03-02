//
// Copyright (C) 2006-2011 Christoph Sommer <christoph.sommer@uibk.ac.at>
//
// Documentation for these modules is at http://veins.car2x.org/
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//

#include "veins/modules/application/traci/TraCIDemoRSU11p.h"
#include <string>

#define SPACE_THRESHOLD 1.5
#define TIME_THRESHOLD 20
#define DELTA_T 20
#define NO_ACCIDENT -1

using Veins::AnnotationManagerAccess;
using namespace std;
Define_Module(TraCIDemoRSU11p);

void TraCIDemoRSU11p::initialize(int stage) {
    BaseWaveApplLayer::initialize(stage);
    if (stage == 0) {
        mobi = dynamic_cast<BaseMobility*> (getParentModule()->getSubmodule("mobility"));
        ASSERT(mobi);
        annotations = AnnotationManagerAccess().getIfExists();
        ASSERT(annotations);
        sentMessage = false;
    }
}
/*
 * Method called each time the RSU receives a beacon
 */
void TraCIDemoRSU11p::onBeacon(WaveShortMessage* wsm) {

    int id = wsm->getSenderAddress(),status,expired;
    std::map<std::string, BlackList>::iterator kkk;
    std::string concatenatedIds;

    //updating storage
    this->storage.updateStorage(VehicleData(wsm->getSenderPos(),wsm->getTimestamp(),wsm->getSenderAddress()));

    //get the relative VehicleData object from the internal storage
    VehicleData vehicle=this->storage.getStorageById(wsm->getSenderAddress());

    // See the field that contains the list of ID ALERTS
    std::string ids_alert = wsm->getAlertReceivedId();

    // string split
    std::string delim = ",";
    int start = 0U,stop = ids_alert.find(delim);
    std::string campo = "start",tmp="tmp";

    while (ids_alert.compare("")){
        campo = ids_alert.substr(start,stop);
        ids_alert = ids_alert.substr(stop+delim.size(),ids_alert.length());
        stop = ids_alert.find(delim);
    }

    /*
     * Collision Detection call-> Before check if the BlackList has already stored some past alerts regarding the same vehicles
     */
    for (std::map<int,VehicleData>::iterator it = this->storage.getStorage().begin(); it!=this->storage.getStorage().end() && it->first!=id; it++){
        if (id < it->first)
            concatenatedIds = to_string(id) + to_string(it->first);
        else
            concatenatedIds = to_string(it->first) + to_string(id);

        kkk = this->BL.find(concatenatedIds);

        if (kkk != BL.end()){
            status = kkk->second.getStatus();

            // check if alerts has expired 20 seconds
            if (SIMTIME_DBL(simTime()) - kkk->second.getTimeStampAlert() > DELTA_T)
                expired = 1;
            if (expired || !status){

                collisionAvoidance(wsm->getSenderAddress(),it->first);
            }
        }
        else{

            collisionAvoidance(wsm->getSenderAddress(),it->first);
        }

    }

}

void TraCIDemoRSU11p::onAlert(WaveShortMessage* wsm) {

}

void TraCIDemoRSU11p::onData(WaveShortMessage* wsm) {
    findHost()->getDisplayString().updateWith("r=16,green");

    annotations->scheduleErase(1, annotations->drawLine(wsm->getSenderPos(), mobi->getCurrentPosition(), "blue"));

    if (!sentMessage) sendMessage(wsm->getWsmData());
}


void TraCIDemoRSU11p::sendMessage(std::string blockedRoadId) {
    sentMessage = true;
    t_channel channel = dataOnSch ? type_SCH : type_CCH;
    WaveShortMessage* wsm = prepareWSM("data", dataLengthBits, channel, dataPriority, -1,2,0);
    wsm->setWsmData(blockedRoadId.c_str());
    sendWSM(wsm);
}

void TraCIDemoRSU11p::sendAlert(long id1,long id2,double time,int collision_type,float timestamp,double velocity1,double velocity2){

    sentMessage = true;
    t_channel channel = type_CCH;
    WaveShortMessage* wsm = prepareWSM("alert", dataLengthBits, channel, dataPriority, -1,2,"");

    // creation and assignment of the data message to the WSM
    std::string data = to_string(timestamp)+ ","+to_string(id1) + ","+to_string(velocity1)+"," + to_string(id2) + "," +to_string(velocity2)+"," + to_string(time) + ","+ to_string(wsm->getId()) + "," + to_string(collision_type);
    wsm->setWsmData(data.c_str());

    // Blacklist update for the new alert
    updateBlackList(wsm->getId(),id1,id2,timestamp,collision_type);

    cout << "Update blacklist with "+ to_string(id1)+ " "+ to_string(id2)+ " "+to_string(timestamp);

    sendWSM(wsm);

}

/*
 * update of the BlackList: for the pileup accidents, just only the vehicle behind need to receive the alert
 * The key of the map is the concatenation of the involved vehicles always in the form (smaller+bigger)
 */
void TraCIDemoRSU11p::updateBlackList(long id_alert, long id1,long id2,simtime_t timestamp,int collision_type){

    std::string concatenatedIds;
    int max = -1;
    std::map<std::string, BlackList>::iterator kkk;


    if (id1<id2){
        concatenatedIds = to_string(id1) + to_string(id2);
        max = 2;
    }
    else
    {
        concatenatedIds = to_string(id2) + to_string(id1);
        max = 1;
    }

    kkk = this->BL.find(concatenatedIds);
    if (kkk != BL.end()){
        kkk->second.setRxId1();
        kkk->second.setRxId2();
        kkk->second.setIdAlert(id_alert);
        kkk->second.setTimeStampAlert(timestamp);
    }
    else{
        if (max==2)
            this->BL[concatenatedIds]=BlackList(id_alert,id1,id2,timestamp);
        else
            this->BL[concatenatedIds]=BlackList(id_alert,id2,id1,timestamp);

        if (collision_type == 1) {
            //pileup accidents id2 is not necessary
            this->BL[concatenatedIds].setRxId2();
        }
    }
}

void TraCIDemoRSU11p::sendWSM(WaveShortMessage* wsm) {
    sendDelayedDown(wsm,individualOffset);

    if (std::string(wsm->getName()) == "alert"){
        std::string s= to_string(wsm->getSenderAddress())  + "," + wsm->getWsmData() +"\n";

        //FILE LOG writing alertLogRsu.csv
        FILE* f=fopen("alertLogRSU.csv","a");
        fputs(s.c_str(),f);
        fclose(f);

    }

}

/*
 * Collision Avoidance method->Firstly it calculate the mindistime
 * If this value is related to an accident, it calculates the mindistspace, detect the collision type
 * Secondly check if these values will lead to a future accident
 * Note that in the case of PILEUP just for the postprocessing we need the vehicle behind
 * in first position in the function sendAlert()
 */
void TraCIDemoRSU11p::collisionAvoidance(long id1,long id2){
    double space;
    double time;
    double velocity1,velocity2;
    int collision_type;

    time = this->storage.mindistTime(id1,id2);

    if (time!=NO_ACCIDENT){

    space = this->storage.mindistSpace(id1,id2);

    collision_type=this->storage.direction(id1,id2); /*1 if the same (pileup), 0 if different(crossing)*/


    if (space<SPACE_THRESHOLD && time<TIME_THRESHOLD){
        cout<<"ALERT";

        for (std::map<int,VehicleData>::iterator itt = this->storage.getStorage().begin(); itt!=this->storage.getStorage().end(); itt++)
        {
            if (itt->first == id1){
                velocity1=itt->second.getVelocity();
            }
            if (itt->first == id2){
                velocity2=itt->second.getVelocity();
            }
        }

        if (collision_type == 1){

            if (storage.getOrderVehicles(id1,id2) == 1){
               sendAlert(id1,id2,time,collision_type,SIMTIME_DBL(simTime()),velocity1,velocity2);
               cout<<"ALERT sent PILEUP ACCIDENT "+to_string(time) +" ids: "+to_string(id1)+" ; "+to_string(id2) +"\n";
            }
            else{

                 sendAlert(id2,id1,time,collision_type,SIMTIME_DBL(simTime()),velocity2,velocity1);
                 cout<<"ALERT sent PILEUP ACCIDENT "+to_string(time) +" ids: "+to_string(id2)+" ; "+to_string(id1) +"\n";
            }
        }
        else{

          sendAlert(id1,id2,time,collision_type,SIMTIME_DBL(simTime()),velocity2,velocity1);
          cout<<"ALERT sent CROSSING ACCIDENT "+to_string(time) +" ids: "+to_string(id1)+" ; "+to_string(id2) +"\n";
        }

    }
    }
    return;

}

void TraCIDemoRSU11p::clearBlackList(simtime_t actualTime){
    for (std::map<std::string,BlackList>::iterator it = this->BL.begin(); it!=this->BL.end(); it++)
    {

        if (it->second.getTimeStampAlert()-actualTime>10){
            BL.erase(it);
        }
    }
    return;
}
