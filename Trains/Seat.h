#pragma once
#include "customer.h"

class Seat {
public:
    Seat();
    ~Seat();

    void setSeatNumber(int number);
    int getSeatNumber() const;

    bool isBooked() const;
    void bookSeat(const Customer& customer);
    void cancelBooking();
    Customer* getCustomer() const;

private:
    int seatNumber;
    bool booked;
    Customer* customer;
};

