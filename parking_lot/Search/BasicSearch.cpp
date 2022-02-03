//
//  BasicSearch.cpp
//  parking_lot
//
//  Created by Nallagatla Manikanta on 31/12/21.
//

#include "BasicSearch.h"

vector<Models::Vehicle*> Search::BasicSearch::getVehiclesByColor(Models::Color *c)
{
    vector<Models::Vehicle*> ans;
    for (auto &s: this->rep->getSlots())
    {
        if (s->getVehicle() != NULL && s->getVehicle()->getColor()->getName() == c->getName())
            ans.push_back(s->getVehicle());
    }
    return ans;
}

Models::Vehicle* Search::BasicSearch::getVehicleByNumber(string number)
{
    Models::Vehicle* ans = NULL;
    for (auto &s: this->rep->getSlots())
    {
        if (s->getVehicle() != NULL && s->getVehicle()->getNumber() == number)
            ans = s->getVehicle();
    }
    return ans;
}

vector<Models::Slot*> Search::BasicSearch::getSlotsByColor(Models::Color *c)
{
    vector<Models::Slot*> ans;
    for (auto &s: this->rep->getSlots())
    {
        if (s->getVehicle() != NULL && s->getVehicle()->getColor()->getName() == c->getName())
            ans.push_back(s);
    }
    return ans;
}


