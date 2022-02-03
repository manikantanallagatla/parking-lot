//
//  SlotsFullException.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 01/01/22.
//

#ifndef SlotsFullException_h
#define SlotsFullException_h

#include "BaseException.h"

namespace Exceptions {
class SlotsFullException: public BaseException {
private:
    std::string s;
public:
    SlotsFullException(std::string message);
    std::string getMessage() override;
};
}

#endif /* SlotsFullException_h */
