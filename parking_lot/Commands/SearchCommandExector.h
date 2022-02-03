//
//  SearchCommandExector.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 01/01/22.
//

#ifndef SearchCommandExector_h
#define SearchCommandExector_h

#include "BaseCommandExecutor.h"
#include "../Repository/MemorySlotRepository.h"
#include "../Models/Slot.h"
#include "../Models/ColorFactory.h"
#include "../Search/BasicSearch.h"
#include "../Output/ConsolePrinter.h"

namespace Commands {
class SearchCommandExecutor: public BaseCommandExecutor {
    Repository::MemorySlotRepository *rep;
    string s;
    Search::SearchInterface *search;
    Output::Printer *p;
    Models::ColorFactory *cf;
public:
    SearchCommandExecutor(Repository::MemorySlotRepository *rep,
                          string s,
                          Output::Printer *p,
                          Models::ColorFactory *cf)
    {
        this->s = s;
        this->rep = rep;
        this->p = p;
        this->cf = cf;
        this->search = new Search::BasicSearch(this->rep);
    }
    void run() override;
};
}

#endif /* SearchCommandExector_h */
