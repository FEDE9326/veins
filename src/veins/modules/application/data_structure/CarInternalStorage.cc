/*
 * CarInternalStorage.cpp
 *
 *  Created on: Dec 7, 2016
 *      Author: federico
 */
#define SELF_ID -192

#include "CarInternalStorage.h"
#include "VehicleData.h"

#define PI 3.14159265
#define angular_threshold 0.17
#define NO_ACCIDENT -1

using namespace std;

void CarInternalStorage::updateStorage(VehicleData vehicle){

    int id=vehicle.getId();

    std::map<int, VehicleData>::iterator it = storage.find(id);

    if (it != storage.end()){

        it->second.update(vehicle);

    }else{

        storage[id]=vehicle;

    }

}

VehicleData CarInternalStorage::getStorageById(int id){

    std::map<int, VehicleData>::iterator it = storage.find(id);
    if (it != storage.end())
        return it->second;
    else
        return VehicleData(Coord(-1,-1,-1),0,-1);

}

bool CarInternalStorage::verifyPresence(int id){
    std::map<int, VehicleData>::iterator it = storage.find(id);
        if (it != storage.end())
            return true;
        else
            return false;

}

double CarInternalStorage::mindistTime(int id1,int id2){

    double v1[2],w0[2],v2[2],p1[2],p2[2],hj1,hj2,vtot;

    std::map<int, VehicleData>::iterator it1 = storage.find(id1);
    std::map<int, VehicleData>::iterator it2 = storage.find(id2);

    p1[0]=it1->second.getPos().x;
    p1[1]=it1->second.getPos().y;
    p2[0]=it2->second.getPos().x;
    p2[1]=it2->second.getPos().y;

    v1[0]=it1->second.getVelocityx();
    v1[1]=it1->second.getVelocityy();
    v2[0]=it2->second.getVelocityx();
    v2[1]=it2->second.getVelocityy();

    w0[0]=p1[0]-p2[0];
    w0[1]=p1[1]-p2[1];

    /*
     * mindistime numerator calculation
     * In order to get an accident these 2 components must be both greater than zero
     * It means that both the vehicles are going to collide if they maintain the same velocity
     */
    hj1=-w0[0]*(v1[0]-v2[0]);
    hj2=-w0[1]*(v1[1]-v2[1]);

    /*
     * mindistime denominator calculation
     * denominator must be different than 0 -> -nan value if the components are equal
     * it means that the 2 vehicles go to the same direction with the same velocity->they'll never collide
     */

    vtot=pow(v1[0]-v2[0],2)+pow(v1[1]-v2[1],2);

    if (hj1>=0 && hj2>=0 && vtot!=0)

        return (hj1+hj2)/(vtot);
    else
        // (-1) -> never collide
        return NO_COLLISION;
}

int CarInternalStorage::direction(int id1,int id2){

    /*return 1 if the direction is more or less the same and 0 if the direction is different->corner*/

    std::map<int, VehicleData>::iterator it1 = storage.find(id1);
    std::map<int, VehicleData>::iterator it2 = storage.find(id2);

    double angle1=it1->second.getDirection();
    double angle2=it2->second.getDirection();

    if (abs(angle1-angle2)<angular_threshold)
        return 1;
    else
        return 0;
}


double CarInternalStorage::mindistSpace(int id1,int id2){

    double v1[2],v2[2],tcpa,px1[2],px2[2],p1[2],p2[2],w0[2],hj1,hj2;

    std::map<int, VehicleData>::iterator it1 = storage.find(id1);
    std::map<int, VehicleData>::iterator it2 = storage.find(id2);

    p1[0]=it1->second.getPos().x;
    p1[1]=it1->second.getPos().y;
    p2[0]=it2->second.getPos().x;
    p2[1]=it2->second.getPos().y;

    v1[0]=it1->second.getVelocityx();
    v1[1]=it1->second.getVelocityy();
    v2[0]=it2->second.getVelocityx();
    v2[1]=it2->second.getVelocityy();

    w0[0]=p1[0]-p2[0];
    w0[1]=p1[1]-p2[1];

    hj1=-w0[0]*(v1[0]-v2[0]);
    hj2=-w0[1]*(v1[1]-v2[1]);

    tcpa=(hj1+hj2)/(pow(v1[0]-v2[0],2)+pow(v1[1]-v2[1],2));

    px1[0]=p1[0]+tcpa*v1[0];
    px1[1]=p1[1]+tcpa*v1[1];
    px2[0]=p2[0]+tcpa*v2[0];
    px2[1]=p2[1]+tcpa*v2[1];

    return sqrt(pow(px1[0]-px2[0],2)+pow(px1[1]-px2[1],2));

}
/*
 * this function is needed in order to understand if the order taken by the sendAlert function is correct
 * We need to understand which is the vehicle behind in order to check if that vehicle and only that vehicles will acknoledge the alert
 */

int CarInternalStorage::getOrderVehicles(long id1, long id2){

    long p1[2],p2[2],vx,vy,dx,dy;

    std::map<int, VehicleData>::iterator it1 = storage.find(id1);
    std::map<int, VehicleData>::iterator it2 = storage.find(id2);

    p1[0]=it1->second.getPos().x;
    p2[0]=it2->second.getPos().x;

    p1[1]=it1->second.getPos().y;
    p2[1]=it2->second.getPos().y;

    vx=it1->second.getVelocityx();
    vy=it1->second.getVelocityy();

    dx=p2[0]-p1[0];
    dy=p2[1]-p2[1];

    // correct order only if the product of the position and velocity over the 2 axis are greater than zero
    if(dx*vx>=0 && dy*vy>=0)
        return 1;
    else
        return 0;

}


