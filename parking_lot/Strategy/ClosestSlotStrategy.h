//
//  ClosestSlotStrategy.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 31/12/21.
//

#ifndef ClosestSlotStrategy_h
#define ClosestSlotStrategy_h

#include "SlotStrategy.h"
#include "../Repository/MemorySlotRepository.h"
#include "../Models/Slot.h"

namespace Strategy {
class ClosestSlotStrategy: public SlotStrategy {
private:
    Repository::MemorySlotRepository *rep;
public:
    ClosestSlotStrategy(Repository::MemorySlotRepository *rep)
    {
        this->rep = rep;
    }
    Models::Slot* getFreeSlot() override;
};
}


#endif /* ClosestSlotStrategy_h */
