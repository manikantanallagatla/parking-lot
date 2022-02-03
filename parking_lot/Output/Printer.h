//
//  Printer.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 31/12/21.
//

#ifndef Printer_h
#define Printer_h

#include <iostream>

namespace Output
{
class Printer {
public:
    virtual void print(std::string s) = 0;
};
}

#endif /* Printer_h */
