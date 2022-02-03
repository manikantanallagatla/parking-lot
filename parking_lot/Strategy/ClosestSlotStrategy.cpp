//
//  ClosestSlotStrategy.cpp
//  parking_lot
//
//  Created by Nallagatla Manikanta on 31/12/21.
//

#include "ClosestSlotStrategy.h"
#include "../Exceptions/SlotsFullException.h"

using namespace std;

Models::Slot* Strategy::ClosestSlotStrategy::getFreeSlot()
{
    vector<Models::Slot*> slots = this->rep->getSlots();
    for (auto &s: slots)
    {
        if (s->getVehicle() == NULL)
            return s;
    }
    throw Exceptions::SlotsFullException("Slots are full");
    return NULL;
}
