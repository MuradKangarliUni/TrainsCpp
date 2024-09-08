#pragma once 
#include <string>
#include "Customer.h"


class Train {
public:
    virtual ~Train() {}
    virtual void reserveSeat(Customer* c) = 0;
    virtual int getId() = 0;
    virtual void displayTrainInfo() const = 0;
};

