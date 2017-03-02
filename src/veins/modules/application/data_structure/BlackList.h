/*
 * BlackList.h
 *
 *  Created on: Feb 21, 2017
 *      Author: greta
 */

#ifndef SRC_VEINS_MODULES_APPLICATION_DATA_STRUCTURE_BLACKLIST_H_
#define SRC_VEINS_MODULES_APPLICATION_DATA_STRUCTURE_BLACKLIST_H_

#include "veins/modules/application/ieee80211p/BaseWaveApplLayer.h"
#include "veins/modules/world/annotations/AnnotationManager.h"


class BlackList {

/* Blacklist is a collection of alert messages sent by the RSU.
 * Main scopes:
 * 1) Avoid the continuous transmission of alerts to vehicles for which the RSU already detect a possible collision
 * 2) Acknoledge the alert in order to understand if the alert is received by both vehicle or the transmission failed
 * BlackList elements are created the first time, then updated if a new alert is sent to the same vehicles
 *
 * id_alert-->id of the alert sent
 * id1,id2-->ids of the involved vehicles
 * rx_id1,rx_id2-->tell us if the vehicle id1/2 has received the correspondent alert
 * timestamp_alert-->timestamp of the alert
 * ignored-->if 1 this couple of vehicle must be ignored till expiration. This field is set to 1 if both vehicles have acknoledged the alerts
*/

public:

    //empty element
    BlackList(){
        this->id1=-1;
        this->id2=-1;
        this->id_alert=-1;
        this->rx_id1=0;
        this->rx_id2=0;
        this->timestamp_alert=-100;
    }

    BlackList(long id_alert,long id1,long id2,simtime_t timestamp){
        this->id1=id1;
        this->id2=id2;
        this->id_alert=id_alert;
        this->rx_id1=0;
        this->rx_id2=0;
        this->timestamp_alert=timestamp;

    };

    void setIdAlert(long id_alert);
    long getIdAlert();
    void setId1(long id1);
    void setId2(long id2);
    long getId1();
    long getId2();
    void setRxId1();
    void setRxId2();
    long getRxId1();
    long getRxId2();
    void setTimeStampAlert(simtime_t timestamp);
    simtime_t getTimeStampAlert();
    void setStatus(int ignored);
    int getStatus();

protected:
    long id_alert;
    long id1,id2;
    int rx_id1,rx_id2;
    simtime_t timestamp_alert;
    int ignored;
};

#endif /* SRC_VEINS_MODULES_APPLICATION_DATA_STRUCTURE_BLACKLIST_H_ */

