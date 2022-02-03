//
//  Mode.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 31/12/21.
//

#ifndef Mode_h
#define Mode_h

#include <string>

using namespace std;

namespace Mode {
class InputMode {
public:
    virtual string takeInput() = 0;
};
}

#endif /* Mode_h */
