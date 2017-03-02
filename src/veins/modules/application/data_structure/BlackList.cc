/*
 * BlackList.cpp
 *
 *  Created on: Feb 21, 2017
 *      Author: greta
 */

#include "BlackList.h"

void BlackList::setIdAlert(long id_alert){
    this->id_alert=id_alert;
}

long BlackList::getIdAlert(){
    return this->id_alert;
}

void BlackList::setId1(long id1){
    this->id1=id1;
}

long BlackList::getId1(){
    return this->id1;
}

void BlackList::setId2(long id2){
    this->id2=id2;
}

long BlackList::getId2(){
    return this->id2;
}

void BlackList::setRxId1(){
    this->rx_id1=1;
}

long BlackList::getRxId1(){
    return this->rx_id1;
}

void BlackList::setRxId2(){
    this->rx_id2=1;

}

long BlackList::getRxId2(){
    return this->rx_id2;
}

void BlackList::setTimeStampAlert(simtime_t timestamp){
    this->timestamp_alert=timestamp;
}

simtime_t BlackList::getTimeStampAlert(){
    return this->timestamp_alert;
}


int BlackList::getStatus(){
    return this->ignored;
}

void BlackList::setStatus(int ignored){
    this->ignored=ignored;
}
