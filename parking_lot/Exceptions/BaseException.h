//
//  BaseException.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 31/12/21.
//

#ifndef BaseException_h
#define BaseException_h

#include <string>

namespace Exceptions {
class BaseException: public std::exception {
public:
    virtual std::string getMessage() = 0;
};
}

#endif /* BaseException_h */
