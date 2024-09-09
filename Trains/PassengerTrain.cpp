#include "PassengerTrain.h"

#include <iostream>

PassengerTrain::PassengerTrain(const std::string& model, int numberOfSeats)
    : m_model(model), m_numberOfSeats(numberOfSeats), curSeat(0) {}

PassengerTrain::~PassengerTrain() = default;

void PassengerTrain::displayTrainInfo() const {
    std::cout << "Passenger Train Model: " << m_model << std::endl;
    std::cout << "Number of Seats: " << seats.size() << std::endl;
}

void PassengerTrain::reserveSeat(Customer* c) {
    if (seats.size() >= m_numberOfSeats) {
        std::cout << "Warning: all places occupied, exiting..." << std::endl;
    }
    Seat s;
    s.setSeatNumber(curSeat++);
    s.bookSeat(c);
    seats[s] = *c;
}