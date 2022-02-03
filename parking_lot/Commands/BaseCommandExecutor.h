//
//  BaseCommandExecutor.h
//  parking_lot
//
//  Created by Nallagatla Manikanta on 31/12/21.
//

#ifndef BaseCommandExecutor_h
#define BaseCommandExecutor_h

namespace Commands {
class BaseCommandExecutor {
public:
    virtual void run() = 0;
};
}

#endif /* BaseCommandExecutor_h */
