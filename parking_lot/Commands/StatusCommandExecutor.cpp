//
//  StatusCommandExecutor.cpp
//  parking_lot
//
//  Created by Nallagatla Manikanta on 01/01/22.
//

#include "StatusCommandExecutor.h"

void Commands::StatusCommandExecutor::run()
{
    for (auto &s: this->rep->getSlots())
    {
        string temp = "Slot " + std::to_string(s->getId()) + " ";
        if (s->getVehicle() == NULL)
            temp += "is empty";
        else
            temp += ("filled with vehicle of number " +
                    s->getVehicle()->getNumber() +
                    " and color " +
                    s->getVehicle()->getColor()->getName());
        this->p->print(temp);
    }
}
