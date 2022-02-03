//
//  BasicSearch.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 31/12/21.
//

#ifndef BasicSearch_h
#define BasicSearch_h

#include "SearchInterface.h"
#include "../Repository/MemorySlotRepository.h"
#include "../Models/Slot.h"


namespace Search {
class BasicSearch: public SearchInterface{
private:
    Repository::MemorySlotRepository *rep;
public:
    BasicSearch(Repository::MemorySlotRepository *rep)
    {
        this->rep = rep;
    }
    vector<Models::Vehicle*> getVehiclesByColor(Models::Color *c) override;
    Models::Vehicle* getVehicleByNumber(std::string number) override;
    vector<Models::Slot*> getSlotsByColor(Models::Color *c) override;
};
}

#endif /* BasicSearch_h */
