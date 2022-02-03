//
//  BaseRepository.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 31/12/21.
//

#ifndef BaseRepository_h
#define BaseRepository_h

#include "../Models/BaseModel.h"
#include <vector>

namespace Repository
{
class BaseRepository{
public:
    virtual void addEntity(Models::BaseModel *e) = 0;
    virtual void updateEntity(Models::BaseModel *e) = 0;
    virtual std::vector<Models::BaseModel*> getEntities() = 0;
};
}

#endif /* BaseRepository_h */
