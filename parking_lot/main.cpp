//
//  main.cpp
//  parking_lot
//
//  Created by Nallagatla Manikanta on 31/12/21.
//

#include <iostream>
#include "Service/ParkingLot.h"

int main(int argc, const char * argv[])
{
    Service::ParkingLot *lot = new Service::ParkingLot(5, "console", "console");
    lot->run();
    return 0;
}
