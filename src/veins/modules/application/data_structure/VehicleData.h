/*
 * VehicleData.h
 *
 *  Created on: Dec 7, 2016
 *      Author: federico
 */

#ifndef SRC_VEINS_MODULES_APPLICATION_DATA_STRUCTURE_VEHICLEDATA_H_
#define SRC_VEINS_MODULES_APPLICATION_DATA_STRUCTURE_VEHICLEDATA_H_
#include "veins/base/utils/Coord.h"
#include <math.h>
#include <iostream>

using namespace std;

class VehicleData {
    /*
     * Simple object in order to store information about vehicles
     * Velocity and direction are updated considering the already stored VehicleData and the new one
     * Just the last information are stored->we don't care about outdated information
     */

public:

    VehicleData(Coord pos,simtime_t timestamp,long id){
        this->id=id;
        this->pos=pos;
        this->timestamp=timestamp;
        this->direction=0;
        this->vx=0;
        this->vy=0;
        this->velocity=0;
    }
    VehicleData(){
        this->id=-1;
        this->pos=Coord(-1,-1,-1);
        this->timestamp=-1;
        this->direction=0;
        this->vx=0;
        this->vy=0;
        this->velocity=0;
    }

    int getId();
    Coord& getPos();
    simtime_t& getTimestamp();
    double getDirection();
    double getVelocityx();
    double getVelocityy();
    double getVelocity();
    void update(VehicleData up);




protected:
    Coord pos;
    simtime_t timestamp;
    int id;
    double direction;
    double vx;
    double vy;
    double velocity;

};

#endif /* SRC_VEINS_MODULES_APPLICATION_DATA_STRUCTURE_VEHICLEDATA_H_ */
