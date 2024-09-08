#include "PassengerTrain.h"

#include <iostream>

PassengerTrain::PassengerTrain(const std::string& model, int numberOfSeats)
    : Train(model), seats(numberOfSeats) {}

PassengerTrain::~PassengerTrain() = default;

void PassengerTrain::displayTrainInfo() const {
    std::cout << "Passenger Train Model: " << model << std::endl;
    std::cout << "Number of Seats: " << seats.size() << std::endl;
}
