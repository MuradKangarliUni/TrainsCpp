#pragma once 
#include <string>

class Train {
protected:
    Train(const std::string& model) : model(model) {}

    virtual ~Train() {}

    virtual void displayTrainInfo() const = 0;

    std::string model;
};

