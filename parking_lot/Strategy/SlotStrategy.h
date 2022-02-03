//
//  Strategy.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 31/12/21.
//

#ifndef Strategy_h
#define Strategy_h

#include "../Models/Slot.h"

namespace Strategy {
class SlotStrategy{
public:
    virtual Models::Slot* getFreeSlot() = 0;
};
}

#endif /* Strategy_h */
