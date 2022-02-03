//
//  SlotsFullException.cpp
//  parking_lot
//
//  Created by Nallagatla Manikanta on 01/01/22.
//

#include "SlotsFullException.h"

Exceptions::SlotsFullException::SlotsFullException(std::string s)
{
    this->s = s;
}

std::string Exceptions::SlotsFullException::getMessage()
{
    return this->s;
}
