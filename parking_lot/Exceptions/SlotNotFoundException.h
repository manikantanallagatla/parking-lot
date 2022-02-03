//
//  SlotNotFoundException.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 01/01/22.
//

#ifndef SlotNotFoundException_h
#define SlotNotFoundException_h

#include "BaseException.h"

namespace Exceptions {
class SlotNotFoundException: public BaseException {
private:
    std::string s;
public:
    SlotNotFoundException(std::string message);
    std::string getMessage() override;
};
}

#endif /* SlotNotFoundException_h */
