#pragma once

#include "train.h"
#include <vector>
#include "seat.h"

class PassengerTrain : public Train {
public:
    PassengerTrain(const std::string& model, int numberOfSeats);

    ~PassengerTrain();

    void displayTrainInfo() const override;

    std::vector<Seat>& getSeats() {
        return seats;
    }

private:
    std::vector<Seat> seats;
};

