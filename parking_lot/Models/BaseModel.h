//
//  BaseModel.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 31/12/21.
//

#ifndef BaseModel_h
#define BaseModel_h

#include <string>

namespace Models {
class BaseModel{
public:
    virtual std::string getIdentifier() = 0;
};
}

#endif /* BaseModel_h */
