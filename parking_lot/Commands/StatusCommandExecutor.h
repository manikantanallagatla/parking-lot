//
//  StatusCommandExecutor.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 01/01/22.
//

#ifndef StatusCommandExecutor_h
#define StatusCommandExecutor_h

#include "BaseCommandExecutor.h"
#include "../Repository/MemorySlotRepository.h"
#include "../Models/Slot.h"
#include "../Output/ConsolePrinter.h"

namespace Commands {
class StatusCommandExecutor: public BaseCommandExecutor {
    Repository::MemorySlotRepository *rep;
    Output::Printer *p;
public:
    StatusCommandExecutor(Repository::MemorySlotRepository *rep,
                          Output::Printer *p)
    {
        this->rep = rep;
        this->p = p;
    }
    void run() override;
};
}

#endif /* StatusCommandExecutor_h */
