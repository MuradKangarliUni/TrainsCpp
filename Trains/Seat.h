#pragma once
#include "customer.h"

class Seat {
public:
    Seat();
    ~Seat();

    bool isBooked() const;
    void bookSeat(Customer* customer);
    void cancelBooking();
    Customer* getCustomer() const;

private:
    bool booked;
    Customer* customer;
};

