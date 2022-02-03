//
//  BookSlotCommandExecutor.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 01/01/22.
//

#ifndef BookSlotCommandExecutor_h
#define BookSlotCommandExecutor_h

#include "BaseCommandExecutor.h"
#include "../Repository/MemorySlotRepository.h"
#include "../Models/Vehicle.h"
#include "../Strategy/SlotStrategy.h"
#include "../Output/ConsolePrinter.h"

namespace Commands {
class BookSlotCommandExecutor: public BaseCommandExecutor {
    Models::Vehicle *v;
    Repository::MemorySlotRepository *rep;
    Strategy::SlotStrategy *st;
    Output::Printer *p;
public:
    BookSlotCommandExecutor(Repository::MemorySlotRepository *rep,
                            Models::Vehicle *v,
                            Strategy::SlotStrategy *st,
                            Output::Printer *p)
    {
        this->v = v;
        this->rep = rep;
        this->st = st;
        this->p = p;
    }
    void run() override;
};
}

#endif /* BookSlotCommandExecutor_h */
