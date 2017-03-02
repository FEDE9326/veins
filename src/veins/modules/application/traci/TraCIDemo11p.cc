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

#include "veins/modules/application/traci/TraCIDemo11p.h"


#include <iostream>
#include <string>


using Veins::TraCIMobilityAccess;
using Veins::AnnotationManagerAccess;
using namespace std;
const long SELF_ID =-192;
const simsignalwrap_t TraCIDemo11p::parkingStateChangedSignal = simsignalwrap_t(TRACI_SIGNAL_PARKING_CHANGE_NAME);

Define_Module(TraCIDemo11p);

void TraCIDemo11p::initialize(int stage) {
	BaseWaveApplLayer::initialize(stage);
	if (stage == 0) {
		mobility = TraCIMobilityAccess().get(getParentModule());
		traci = mobility->getCommandInterface();
		traciVehicle = mobility->getVehicleCommandInterface();
		annotations = AnnotationManagerAccess().getIfExists();
		ASSERT(annotations);

		sentMessage = false;
		lastDroveAt = simTime();
		findHost()->subscribe(parkingStateChangedSignal, this);
		isParking = false;
		sendWhileParking = par("sendWhileParking").boolValue();
		this->traciVehicle->setSpeedMode(1);
	}
}

void TraCIDemo11p::onBeacon(WaveShortMessage* wsm) {
/* ERRORE!!!! wsm->getId() RITORNA L'ID DEL MESSAGGIO E NON DEL VEICOLO */
    //traciVehicle->updateDirection(wsm->getSenderPos(),wsm->getTimestamp(),wsm->getId());
    //traciVehicle->updateDirection(wsm->getSenderPos(),wsm->getTimestamp(),wsm->getSenderAddress());
    //long dist_t,dist_s;
    //traciVehicle->getWarning(&dist_s,&dist_t,wsm->getSenderAddress());

}

void TraCIDemo11p::onData(WaveShortMessage* wsm) {
	findHost()->getDisplayString().updateWith("r=16,green");
	annotations->scheduleErase(1, annotations->drawLine(wsm->getSenderPos(), mobility->getPositionAt(simTime()), "blue"));

	if (mobility->getRoadId()[0] != ':') traciVehicle->changeRoute(wsm->getWsmData(), 9999);
	if (!sentMessage) sendMessage(wsm->getWsmData());
}

void TraCIDemo11p::onAlert(WaveShortMessage* wsm){
    double decel = 9.81*0.91; //value taken from the web for dry asphalt
    std::string velocity;
    //timestamp,id1,velocity1,id2,velocity2,mindistTime,id_alert,collision_type
    //cout<<"VEHICLE "+to_string(this->myId)+waiting_confirms+"\n";
    std::string data = wsm->getWsmData();
    std::string delim = ",";
    int start = 0U,end = data.find(delim); // end è l'inizio del delimitatore
    std::string tstamp = data.substr(start,end);
    std::string tmp = data.substr(end+delim.length(),data.length()); //otteniamo timestamp
    start = 0U,end = tmp.find(delim); // end è l'inizio del delimitatore
    std::string id1 = tmp.substr(start,end);
    tmp = tmp.substr(end+delim.length(),data.length());
    start = 0U,end = tmp.find(delim);
    std::string velocity1 = tmp.substr(start,end);
    tmp = tmp.substr(end+delim.length(),data.length());
    start = 0U,end = tmp.find(delim);
    std::string id2 = tmp.substr(start,end);
    tmp = tmp.substr(end+delim.length(),data.length());
    start = 0U,end = tmp.find(delim);
    std::string velocity2 = tmp.substr(start,end);
    tmp = tmp.substr(end+delim.length(),data.length());
    start = 0U,end = tmp.find(delim); // end è l'inizio del delimitatore
    std::string minDistTime = tmp.substr(start,end);
    tmp = tmp.substr(end+delim.length(),data.length());
    start = 0U,end = tmp.find(delim); // end è l'inizio del delimitatore
    std::string id_mess = tmp.substr(start,end);
    tmp = tmp.substr(end+delim.length(),data.length());
    std::string collision_type = tmp;
    //cout << "Id mess="+ id_mess+ "\n";
    std::string myIdnew = to_string(this->myId);
    //std::string sd= myId+","+ id1 + "," + id2 + "\n";
    //cout << sd;
    FILE* f=fopen("alertLogVehicle.csv","a");
    if (id1==myIdnew || id2==myIdnew){
        if(id1==myIdnew){
            velocity = velocity1;
        }
        else{
            velocity = velocity2;
        }
        double braking_time = std::stod(velocity)/decel;
        if (collision_type == "1" && id1==myIdnew){
            std::string s= id_mess + "," + myIdnew + "," + to_string(SIMTIME_DBL(simTime())) + ","+ velocity+"\n";
            fputs(s.c_str(),f);
            this->traciVehicle->slowDown(0,braking_time);
        }
        else if (collision_type == "0"){
            std::string s= id_mess + "," + myIdnew + "," + to_string(SIMTIME_DBL(simTime())) + ","+ velocity+"\n";
            fputs(s.c_str(),f);
            this->traciVehicle->slowDown(0,braking_time);
        }


    }
    fclose(f);
    waiting_confirms = waiting_confirms + id_mess+",";

}

void TraCIDemo11p::sendMessage(std::string blockedRoadId) {
	sentMessage = true;
	t_channel channel = dataOnSch ? type_SCH : type_CCH;
	WaveShortMessage* wsm = prepareWSM("data", dataLengthBits, channel, dataPriority, -1,2);
	wsm->setWsmData(blockedRoadId.c_str());

	//inserting myself

	traciVehicle->updateDirection(wsm->getSenderPos(),wsm->getTimestamp(),myId);

	sendWSM(wsm);
}
void TraCIDemo11p::receiveSignal(cComponent* source, simsignal_t signalID, cObject* obj, cObject* details) {
	Enter_Method_Silent();
	if (signalID == mobilityStateChangedSignal) {
		handlePositionUpdate(obj);
	}
	else if (signalID == parkingStateChangedSignal) {
		handleParkingUpdate(obj);
	}
}
void TraCIDemo11p::handleParkingUpdate(cObject* obj) {
	isParking = mobility->getParkingState();
	if (sendWhileParking == false) {
		if (isParking == true) {
			(FindModule<BaseConnectionManager*>::findGlobalModule())->unregisterNic(this->getParentModule()->getSubmodule("nic"));
		}
		else {
			Coord pos = mobility->getCurrentPosition();
			(FindModule<BaseConnectionManager*>::findGlobalModule())->registerNic(this->getParentModule()->getSubmodule("nic"), (ChannelAccess*) this->getParentModule()->getSubmodule("nic")->getSubmodule("phy80211p"), &pos);
		}
	}
}
void TraCIDemo11p::handlePositionUpdate(cObject* obj) {
	BaseWaveApplLayer::handlePositionUpdate(obj);

	// stopped for for at least 10s?
	if (mobility->getSpeed() < 1) {
		if (simTime() - lastDroveAt >= 10) {
			findHost()->getDisplayString().updateWith("r=16,red");
			if (!sentMessage) sendMessage(mobility->getRoadId());
		}
	}
	else {
		lastDroveAt = simTime();
	}
}
void TraCIDemo11p::sendWSM(WaveShortMessage* wsm) { //here when the vehicle send a beacon
    //cout<<"VEHICLE "+to_string(this->myId)+"waiting confirms = "+waiting_confirms+"+++++";
    //cout<<"VEHICLE "+to_string(this->myId)+" ";
    //cout<<"waiting_confirms: "+this->waiting_confirms+"+++ ";
    wsm->setAlertReceivedId(this->waiting_confirms);
    this->waiting_confirms = "";
    //cout<<wsm->getAlertReceivedId();
    //cout<<"in WSM: "+wsm->getAlertReceivedId()+"\n";
	if (isParking && !sendWhileParking) return;
	sendDelayedDown(wsm,individualOffset);
	//this->traciVehicle->slowDown(0,10);
}
