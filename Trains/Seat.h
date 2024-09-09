#pragma once
#include "customer.h"

class Seat {
public:
    Seat();
    ~Seat();

    void setSeatNumber(int number);
    int getSeatNumber() const;

    bool isBooked() const;
    void bookSeat(Customer* customer);
    void cancelBooking();
    Customer* getCustomer() const;
    bool operator<(const Seat& other) const {
        return this->seatNumber < other.seatNumber;
    }

private:
    bool booked;
    Customer* customer;
    int seatNumber;
};

