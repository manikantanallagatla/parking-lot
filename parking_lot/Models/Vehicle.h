//
//  Vehicle.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 31/12/21.
//

#ifndef Vehicle_h
#define Vehicle_h

#include "Color.h"
#include <iostream>

namespace Models
{
class Vehicle: public BaseModel {
    std::string number;
    Color *color;
public:
    Vehicle(std::string n, Color *c)
    {
        number = n;
        color = c;
    }
    
    std::string getNumber()
    {
        return number;
    }
    
    Color* getColor()
    {
        return color;
    }
    
    string getIdentifier()
    {
        return this->number;
    }
};
}

#endif /* Vehicle_h */
