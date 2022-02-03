//
//  ParkingLot.cpp
//  parking_lot
//
//  Created by Nallagatla Manikanta on 01/01/22.
//

#include "ParkingLot.h"

void Service::ParkingLot::run()
{
    p->print("Enter input:");
    string s = i->takeInput();
    while (s != "quit")
    {
        if (s.size() == 0)
            continue;
        auto command = ef->getCommand(s);
        if (command == NULL)
            p->print("please enter valid command");
        else
            command->run();
        p->print("Enter input:");
        s = i->takeInput();
    }
    p->print("Thank you");
}
