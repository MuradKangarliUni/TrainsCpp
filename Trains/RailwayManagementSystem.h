#pragma once
#include "Customer.h"
#include "Train.h"
#include "PassengerTrain.h"
#include "ElectricTrain.h"
#include "Seat.h"
#include <vector>
#include <iostream>

typedef const int& defIntRef;
class RailwayManagementSystem
{
private:
	std::vector<Train*> m_trains;
	std::vector<std::unique_ptr<Customer>> m_customers;

public:
	void makeBooking(int cId, int tId) {
		for (int i = 0; i < m_trains.size(); i++) {
			if (m_trains[i]->getId() == tId) {
				for (int j = 0; j < m_customers.size(); j++) {
					if (m_customers[j]->getId() == cId) {
						m_trains[i]->reserveSeat(m_customers[j].get());
					}
				}
			}
		}
	}
	void addCustomer(intRef id, strRef name, strRef surname) {
		m_customers.push_back(std::make_unique<Customer>(id, name, surname));
	}

	void addTrain(strRef model, defIntRef numSeats, defIntRef batCap=0) {
		int typeOfTrain;
		std::cout << "\n1. Passenger Train\n";
		std::cout << "\n2. Electric Train\n";
		std::cout << "Select type of train:";
		std::cin >> typeOfTrain;
		switch (typeOfTrain) {
		case 1: {
			ElectricTrain* eT = new ElectricTrain(model, numSeats, batCap);
			m_trains.push_back(eT);
			break;
		}
		case 2: {
			PassengerTrain* pT = new PassengerTrain(model, numSeats);
			m_trains.push_back(pT);
			break;
		}
		}
	}
};

