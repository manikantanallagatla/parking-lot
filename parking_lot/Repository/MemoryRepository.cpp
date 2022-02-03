//
//  MemoryRepository.cpp
//  parking_lot
//
//  Created by Nallagatla Manikanta on 31/12/21.
//

#include "MemoryRepository.h"

void Repository::MemoryRepository::addEntity(Models::BaseModel *e)
{
    this->mp[e->getIdentifier()] = e;
}

void Repository::MemoryRepository::updateEntity(Models::BaseModel *e)
{
//    Take a lock;
    this->mp[e->getIdentifier()] = e;
}

std::vector<Models::BaseModel*> Repository::MemoryRepository::getEntities()
{
    std::vector<Models::BaseModel*> ans;
    for (auto it = this->mp.begin(); it != this->mp.end(); it++)
        ans.push_back(it->second);
    return ans;
}
