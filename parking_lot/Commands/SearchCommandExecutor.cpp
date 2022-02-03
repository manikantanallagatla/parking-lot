//
//  SearchCommandExecutor.cpp
//  parking_lot
//
//  Created by Nallagatla Manikanta on 01/01/22.
//

#include "SearchCommandExector.h"

void Commands::SearchCommandExecutor::run()
{
    string temp = this->s;
    auto index = temp.find(' ');
    string entity = temp.substr(0, index);
    temp = temp.substr(index + 1);
    index = temp.find(' ');
    string category = temp.substr(0, index);
    string param = temp.substr(index + 1);
    
    if (entity == "vehicle")
    {
        if (category == "number")
        {
            auto vehicle = this->search->getVehicleByNumber(param);
            if (vehicle == NULL)
                this->p->print("Vehicle with number " + param + " not found");
            else
                this->p->print("Vehicle with number " + param +
                               " and color " + vehicle->getColor()->getName() + " found");
        } else {
            auto vehicles = this->search->getVehiclesByColor(this->cf->getColor(param));
            if (vehicles.size() == 0)
                this->p->print("No vehicle found with color " + param);
            else
                for (auto &v: vehicles)
                    this->p->print("Vehicle found with number " + v->getNumber() + " and color " + v->getColor()->getName());
        }
    } else {
        auto slots = this->search->getSlotsByColor(this->cf->getColor(param));
        if (slots.size() == 0)
            this->p->print("No slots filled with vehicles of color " + param);
        else
            for (auto &s: slots)
                this->p->print("Slot " + std::to_string(s->getId()) +
                               " filled with vehicle of number " +
                               s->getVehicle()->getNumber() +
                               " and color " +
                               s->getVehicle()->getColor()->getName());
    }
}
