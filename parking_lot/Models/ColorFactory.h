//
//  ColorFactory.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 01/01/22.
//

#ifndef ColorFactory_h
#define ColorFactory_h

#include "BlackColor.h"
#include "BlueColor.h"
#include "WhiteColor.h"

using namespace std;

namespace Models
{
class ColorFactory {
public:
    Color* getColor(string name)
    {
        if (name == "white")
            return new WhiteColor();
        if (name == "black")
            return new BlackColor();
        if (name == "blue")
            return new BlueColor();
        return new WhiteColor();        
    }
};
}

#endif /* ColorFactory_h */
