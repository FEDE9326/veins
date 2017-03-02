/*
 * CarInternalStorage.h

 *
 *  Created on: Dec 7, 2016
 *      Author: federico
 */

#ifndef SRC_VEINS_MODULES_APPLICATION_DATA_STRUCTURE_CARINTERNALSTORAGE_H_
#define SRC_VEINS_MODULES_APPLICATION_DATA_STRUCTURE_CARINTERNALSTORAGE_H_

#include "VehicleData.h"
#include "veins/base/utils/Coord.h"
#include <map>

class CarInternalStorage {

    /*
     * Map that collect information about vehicles
     * Data are inserted into the map as VehicleData object
     * Key: id of the vehicle
     */

public:

    CarInternalStorage() {
       std::map<long,VehicleData> storage=std::map<long,VehicleData> ();

    }

    void updateStorage(VehicleData vehicle);
    bool verifyPresence(int id);
    VehicleData getStorageById(int id);
    double mindistTime(int id1,int id2);
    double mindistSpace(int id1,int id2);
    int direction(int id1,int id2);
    int getOrderVehicles(long id1, long id2);

    std::map<int, VehicleData>& getStorage() {
        return storage;
    }

protected:
    std::map<int,VehicleData> storage;

};

#endif /* SRC_VEINS_MODULES_APPLICATION_DATA_STRUCTURE_CARINTERNALSTORAGE_H_ */
