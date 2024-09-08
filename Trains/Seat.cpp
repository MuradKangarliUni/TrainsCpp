#include "Seat.h"

#include "seat.h"

Seat::Seat() : seatNumber(0), booked(false), customer(nullptr) {}

Seat::~Seat() {
    delete customer;
}

void Seat::setSeatNumber(int number) {
    seatNumber = number;
}

int Seat::getSeatNumber() const {
    return seatNumber;
}

bool Seat::isBooked() const {
    return booked;
}

void Seat::bookSeat(const Customer& human) {
    if (!booked) {
        customer = new Customer(human);
        booked = true;
    }
}

void Seat::cancelBooking() {
    if (booked) {
        delete customer;
        customer = nullptr;
        booked = false;
    }
}

Customer* Seat::getCustomer() const {
    return customer;
}
