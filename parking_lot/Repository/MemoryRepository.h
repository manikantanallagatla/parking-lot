//
//  MemoryRepository.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 31/12/21.
//

#ifndef MemoryRepository_h
#define MemoryRepository_h

#include "BaseRepository.h"
#include "../Models/BaseModel.h"
#include <unordered_map>

using namespace std;

namespace Repository
{
class MemoryRepository: public BaseRepository{
private:
    unordered_map<string, Models::BaseModel*> mp;
public:
    void addEntity(Models::BaseModel *e) override;
    void updateEntity(Models::BaseModel *e) override;
    std::vector<Models::BaseModel*> getEntities() override;
};
}

#endif /* MemoryRepository_h */
