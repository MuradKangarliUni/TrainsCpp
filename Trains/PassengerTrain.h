#pragma once

#include "train.h"
#include <vector>
#include "seat.h"
#include <map>

class PassengerTrain : public Train {
public:
    PassengerTrain(const std::string& model, int numberOfSeats);

    ~PassengerTrain();
    int getId() override {
        return Id;
    }
    void displayTrainInfo() const override;
    void reserveSeat(Customer* c) override;
private:
    std::map<Seat, Customer> seats;
    int m_numberOfSeats;
    int Id;
    std::string m_model;
};

