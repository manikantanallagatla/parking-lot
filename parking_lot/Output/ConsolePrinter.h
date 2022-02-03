//
//  ConsolePrinter.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 01/01/22.
//

#ifndef ConsolePrinter_h
#define ConsolePrinter_h

#include "Printer.h"

namespace Output
{
class ConsolePrinter: public Printer
{
    void print(std::string s) override;
};
}

#endif /* ConsolePrinter_h */
