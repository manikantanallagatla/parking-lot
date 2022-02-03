//
//  SearchInterface.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 31/12/21.
//

#ifndef SearchInterface_h
#define SearchInterface_h

#include "../Models/Slot.h"
#include "../Models/Vehicle.h"
#include "../Models/Color.h"
#include <vector>
#include <string>

using namespace std;

namespace Search {
class SearchInterface{
public:
    virtual vector<Models::Vehicle*> getVehiclesByColor(Models::Color *c) = 0;
    virtual Models::Vehicle* getVehicleByNumber(string number) = 0;
    virtual vector<Models::Slot*> getSlotsByColor(Models::Color *c) = 0;
};
}

#endif /* SearchInterface_h */
