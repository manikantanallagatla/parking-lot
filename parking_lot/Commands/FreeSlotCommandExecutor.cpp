//
//  FreeSlotCommandExecutor.cpp
//  parking_lot
//
//  Created by Nallagatla Manikanta on 01/01/22.
//

#include "FreeSlotCommandExecutor.h"

void Commands::FreeSlotCommandExecutor::run()
{
    if (s->getVehicle() != NULL)
    {
        this->s->freeSlot();
        this->rep->updateSlot(this->s);
        this->p->print("Slot freed");
    } else {
        this->p->print("Slot already free");
    }
}

