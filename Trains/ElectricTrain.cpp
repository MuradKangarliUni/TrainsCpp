#include "ElectricTrain.h"
#include <iostream>

ElectricTrain::ElectricTrain(const std::string& model, int numberOfSeats, int batteryCapacity)
    : PassengerTrain(model, numberOfSeats), batteryCapacity(batteryCapacity) {}

ElectricTrain::~ElectricTrain() {}

void ElectricTrain::displayTrainInfo() const {
    PassengerTrain::displayTrainInfo();
    std::cout << "Battery Capacity: " << batteryCapacity << " kWh" << std::endl;
}

int ElectricTrain::getBatteryCapacity() const {
    return batteryCapacity;
}

void ElectricTrain::setBatteryCapacity(int capacity) {
    batteryCapacity = capacity;
}
