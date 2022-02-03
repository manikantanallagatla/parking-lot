//
//  ConsoleInputMode.cpp
//  parking_lot
//
//  Created by Nallagatla Manikanta on 31/12/21.
//

#include "ConsoleInputMode.h"
#include <iostream>

using namespace std;

string Mode::ConsoleInputMode::takeInput()
{
    char s[1000];
    cin.getline(s, 1000);
    return string(s);
}
