//
//  Color.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 31/12/21.
//

#ifndef Color_h
#define Color_h

#include "BaseModel.h"
#include <vector>

using namespace std;

namespace Models
{
class Color: public BaseModel {
    string s;
public:
    Color(string s)
    {
        this->s = s;
    }
    string getName()
    {
        return this->s;
    }
    string getIdentifier()
    {
        return this->s;
    }
};
}

#endif /* Color_h */
