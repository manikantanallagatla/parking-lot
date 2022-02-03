//
//  BookSlotCommandExecutor.cpp
//  parking_lot
//
//  Created by Nallagatla Manikanta on 01/01/22.
//

#include "BookSlotCommandExecutor.h"

void Commands::BookSlotCommandExecutor::run()
{
    auto slot = this->st->getFreeSlot();
    slot->setVehicle(this->v);
    this->p->print("Slot booked");
}
