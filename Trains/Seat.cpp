#include "Seat.h"

#include "seat.h"

Seat::Seat() : booked(false), customer(nullptr) {}

Seat::~Seat() {
    delete customer;
}

bool Seat::isBooked() const {
    return booked;
}

void Seat::bookSeat(Customer* human) {
    if (!booked) {
        customer = human;
        booked = true;
    }
}

void Seat::cancelBooking() {
    if (booked) {
        booked = false;
    }
}

Customer* Seat::getCustomer() const {
    return customer;
}
