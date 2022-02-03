//
//  ExecutorFactory.cpp
//  parking_lot
//
//  Created by Nallagatla Manikanta on 01/01/22.
//

#include "ExecutorFactory.h"
#include "FreeSlotCommandExecutor.h"
#include "SearchCommandExector.h"
#include "StatusCommandExecutor.h"
#include "BookSlotCommandExecutor.h"
#include "../Exceptions/SlotNotFoundException.h"
#include "../Models/Vehicle.h"

Commands::BaseCommandExecutor* Commands::ExecutorFactory::getCommand(string command)
{
    auto index = command.find(' ');
    string temp = command.substr(0, index);
    if (temp == "free")
    {
        for (auto &s: this->rep->getSlots())
        {
            if (std::to_string(s->getId()) == command.substr(index + 1))
                return new FreeSlotCommandExecutor(this->rep, s, this->p);
        }
        throw Exceptions::SlotNotFoundException("Slot with id " + command.substr(index + 1) + " not found");
    }
    if (temp == "search")
    {
        return new SearchCommandExecutor(this->rep, command.substr(index + 1), this->p, this->cf);
    }
    if (temp == "status")
    {
        return new StatusCommandExecutor(this->rep, this->p);
    }
    if (temp == "book")
    {
        temp = command.substr(index + 1);
        index = temp.find(' ');
        string number = temp.substr(0, index);
        string colorName = temp.substr(index + 1);
        return new BookSlotCommandExecutor(this->rep,
                                           new Models::Vehicle(number, this->cf->getColor(colorName)),
                                           st,
                                           this->p);
    }
    return NULL;
}
