//
//  SlotNotFoundException.cpp
//  parking_lot
//
//  Created by Nallagatla Manikanta on 01/01/22.
//

#include "SlotNotFoundException.h"

Exceptions::SlotNotFoundException::SlotNotFoundException(std::string s)
{
    this->s = s;
}

std::string Exceptions::SlotNotFoundException::getMessage()
{
    return this->s;
}
