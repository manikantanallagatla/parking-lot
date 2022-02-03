//
//  MemorySlotRepository.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 31/12/21.
//

#ifndef MemorySlotRepository_h
#define MemorySlotRepository_h

#include "MemoryRepository.h"
#include "../Models/Slot.h"

using namespace std;

namespace Repository
{
class MemorySlotRepository: public MemoryRepository{
public:
    void addSlot(Models::Slot *e)
    {
        MemoryRepository::addEntity(e);
    }
    void updateSlot(Models::Slot *e)
    {
        MemoryRepository::addEntity(e);
    }
    std::vector<Models::Slot*> getSlots()
    {
        std::vector<Models::BaseModel*> es = MemoryRepository::getEntities();
        std::vector<Models::Slot*> ans;
        for (auto &e:es)
        {
            ans.push_back(dynamic_cast<Models::Slot*>(e));
        }
        return ans;
    }
};
}

#endif /* MemorySlotRepository_h */
