//
//  FreeSlotCommandExecutor.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 01/01/22.
//

#ifndef FreeSlotCommandExecutor_h
#define FreeSlotCommandExecutor_h

#include "BaseCommandExecutor.h"
#include "../Repository/MemorySlotRepository.h"
#include "../Models/Slot.h"
#include "../Output/ConsolePrinter.h"

namespace Commands {
class FreeSlotCommandExecutor: public BaseCommandExecutor {
    Models::Slot *s;
    Repository::MemorySlotRepository *rep;
    Output::Printer *p;
public:
    FreeSlotCommandExecutor(Repository::MemorySlotRepository *rep,
                            Models::Slot *s,
                            Output::Printer *p)
    {
        this->s = s;
        this->rep = rep;
        this->p = p;
    }
    void run() override;
};
}

#endif /* FreeSlotCommandExecutor_h */
