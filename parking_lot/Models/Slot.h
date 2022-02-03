//
//  Slot.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 31/12/21.
//

#ifndef Slot_h
#define Slot_h

#include "Vehicle.h"
#include "BaseModel.h"

namespace Models
{
class Slot: public BaseModel {
    int id;
    Vehicle *vehicle;
public:
    Slot(int i)
    {
        id = i;
        vehicle = NULL;
    }
    Vehicle* getVehicle()
    {
        return this->vehicle;
    }
    void setVehicle(Vehicle *v)
    {
        vehicle = v;
    }
    int getId()
    {
        return this->id;
    }
    void freeSlot()
    {
        this->vehicle = NULL;
    }
    string getIdentifier()
    {
        return std::to_string(this->id);
    }
};
}

#endif /* Slot_h */
