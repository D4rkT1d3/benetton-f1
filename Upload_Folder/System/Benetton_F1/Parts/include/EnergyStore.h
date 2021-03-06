//
// Created by jason on 2020/11/06.
//

#ifndef COS214_ENERGYSTORE_H
#define COS214_ENERGYSTORE_H


#include "Part.h"

class EnergyStore: public Part {
    /**
     * @author Jason Maritz u19053292
     * @brief The energystore part class
     */
public:
    EnergyStore(){type = "energystore";};
    /**
     *
     * @return performance of the part based on the members
     */
    virtual double getPerformance();
    /**
     *
     * @return Part* cloned from the part it is called from
     */
    virtual Part* clone();
};


#endif //COS214_ENERGYSTORE_H
