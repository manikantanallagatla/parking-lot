//
//  ConsoleInputMode.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 31/12/21.
//

#ifndef ConsoleInputMode_h
#define ConsoleInputMode_h

#include "Mode.h"

namespace Mode {
class ConsoleInputMode: public InputMode {
    string takeInput() override;
};
}


#endif /* ConsoleInputMode_h */
