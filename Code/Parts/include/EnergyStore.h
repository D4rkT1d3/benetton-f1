//
// Created by jason on 2020/11/06.
//

#ifndef COS214_ENERGYSTORE_H
#define COS214_ENERGYSTORE_H


#include "Part.h"

class EnergyStore: public Part {
public:
    EnergyStore(){type = "energystore";};
    virtual double getPerformance();
    virtual Part* clone();
};


#endif //COS214_ENERGYSTORE_H