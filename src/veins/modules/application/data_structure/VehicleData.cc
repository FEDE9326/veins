/*
 * VehicleData.cc
 *
 *  Created on: Dec 7, 2016
 *      Author: federico
 */

#include "veins/modules/application/data_structure/VehicleData.h"
#define d 1
#define s -1

int VehicleData:: getId(){
    return id;
}

Coord& VehicleData:: getPos(){
    return pos;
}

simtime_t& VehicleData::getTimestamp(){
    return timestamp;
}

double VehicleData::getDirection(){
    return direction;
}

double VehicleData::getVelocityx(){
    return vx;
}
double VehicleData::getVelocityy(){
    return vy;
}
double VehicleData::getVelocity(){
    return velocity;
}

void VehicleData::update(VehicleData up){

    double spacex=up.pos.x-this->pos.x;
    double spacey=up.pos.y-this->pos.y;

    this->vx=spacex/(SIMTIME_DBL(up.timestamp)-SIMTIME_DBL(this->timestamp));
    this->vy=spacey/(SIMTIME_DBL(up.timestamp)-SIMTIME_DBL(this->timestamp));
    this->velocity=sqrt(pow(this->vx,2)+pow(this->vy,2));

    this->direction=atan((up.pos.y-this->pos.y)/(up.pos.x-this->pos.x));
    /*if(up.pos.x>this->pos.x)
        this->vers=d;
    else if(up.pos.x<this->pos.x)
        this->vers=s;
    else{
        if(up.pos.y>=this->pos.y)
            this->vers=d;
        else
            this->vers=s;
    }//basso=destra,alto=sinistra,fermo=destra,destra=1,sinistra=-1*/
    this->pos=up.pos;
    this->timestamp=up.timestamp;

}


