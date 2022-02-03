//
//  ExecutorFactory.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 01/01/22.
//

#ifndef ExecutorFactory_h
#define ExecutorFactory_h

#include "BaseCommandExecutor.h"
#include "../Repository/MemorySlotRepository.h"
#include "../Output/ConsolePrinter.h"
#include "../Models/ColorFactory.h"
#include "../Strategy/SlotStrategy.h"
#include <string>

using namespace std;

namespace Commands {
class ExecutorFactory
{
    Repository::MemorySlotRepository *rep;
    Output::Printer *p;
    Models::ColorFactory *cf;
    Strategy::SlotStrategy *st;
public:
    ExecutorFactory(Repository::MemorySlotRepository *rep,
                    Output::Printer *p,
                    Models::ColorFactory *cf,
                    Strategy::SlotStrategy *st)
    {
        this->p = p;
        this->rep = rep;
        this->cf = cf;
        this->st = st;
    }
    BaseCommandExecutor* getCommand(string command);
};
}

#endif /* ExecutorFactory_h */
