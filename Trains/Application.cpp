#include "Application.h"
#include <iostream>
#include <cstdlib> 

Application::Application() {
	m_rmSystem = std::make_unique<RailwayManagementSystem>();
}

void Application::Run() {
	std::string name, surname, model;
	int tId, cId, choice, id, numSeats, batCap;
	do {
		displayMenu();
		std::cin >> choice;

		switch (choice) {
		case 1:
			system("cls");
			std::cout << "\n\nPlease input train ID: ";
			std::cin >> tId;
			std::cout << "\n\nPlease input customer ID: ";
			std::cin >> cId;
			m_rmSystem->makeBooking(cId, tId);
			break;
		case 2:
			system("cls");
			std::cout << "\n\nPlease input train Model: ";
			std::cin >> model;
			std::cout << "\n\nPlease input number of seats: ";
			std::cin >> numSeats;
			std::cout << "\n\nPlease input battery capacity(if electric, else 0): ";
			std::cin >> batCap;
			m_rmSystem->addTrain(model, numSeats, batCap);
		case 3:
			system("cls");

			std::cout << "\n\nPlease input ID: ";
			std::cin >> id;
			std::cout << "\n\nPlease input name: ";
			std::cin >> name;
			std::cout << "\n\nPlease input surname: ";
			std::cin >> surname;
			m_rmSystem->addCustomer(id, name, surname);
			break;
		default:
			std::cout << "exiting..." << std::endl;
			break;
		}

	} while (choice <4 && choice>0);
}

void Application::displayMenu() {
	system("cls");
	// Display the menu
	std::cout << "\n=== Menu ===" << std::endl;
	std::cout << "1. Make booking" << std::endl;
	std::cout << "2. Add Train" << std::endl;
	std::cout << "3. Add Customer" << std::endl;
	std::cout << "4. Exit" << std::endl;
	std::cout << "Enter your choice (1-3): ";
}