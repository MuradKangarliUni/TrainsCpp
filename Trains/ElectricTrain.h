#pragma once

#include "passengerTrain.h"
#include <string>

class ElectricTrain : public PassengerTrain {
public:
    ElectricTrain(const std::string& model, int numberOfSeats, int batteryCapacity);

    ~ElectricTrain();

    void displayTrainInfo() const override;

    int getBatteryCapacity() const;
    void setBatteryCapacity(int capacity);

private:
    int batteryCapacity;
};