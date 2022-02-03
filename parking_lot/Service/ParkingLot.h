//
//  ParkingLot.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 31/12/21.
//

#ifndef ParkingLot_h
#define ParkingLot_h

#include "../Output/ConsolePrinter.h"
#include "../Models/ColorFactory.h"
#include "../Mode/ConsoleInputMode.h"
#include "../Repository/MemorySlotRepository.h"
#include "../Strategy/ClosestSlotStrategy.h"
#include "../Commands/ExecutorFactory.h"

namespace Service {
class ParkingLot {
    int n;
    Mode::InputMode *i;
    Output::Printer *p;
    Models::ColorFactory *cf;
    Repository::MemorySlotRepository *rep;
    Strategy::SlotStrategy *st;
    Commands::ExecutorFactory *ef;
public:
    ParkingLot(int numSlots,
               string mode,
               string print) {
        n = numSlots;
//      based on mode
        i = new Mode::ConsoleInputMode();
//      based on print
        p = new Output::ConsolePrinter();
        cf = new Models::ColorFactory();
        this->rep = new Repository::MemorySlotRepository();
        for (int i = 0; i < n; i++)
            this->rep->addSlot(new Models::Slot(i + 1));
        st = new Strategy::ClosestSlotStrategy(this->rep);
        ef = new Commands::ExecutorFactory(rep, p, cf, st);
    }
    void run();
};
}

#endif /* ParkingLot_h */
