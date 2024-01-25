//
// Created by Nu lar on 11/16/23.
//

#ifndef CALCULATOR_STATES_H
#define CALCULATOR_STATES_H
#include <map>
#include "StateEnum.h"

class States {
private:
    //map(KEY, VALUE)
    //    (index),  (stored)
    std::map<StateEnum, bool> states;
public:
    States();
    void disableState(StateEnum state);
    void enableState(StateEnum state);
    void toggleState(StateEnum);
    bool getState(StateEnum state) const;
};


#endif //CALCULATOR_STATES_H
