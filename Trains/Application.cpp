#include "Application.h"
#include <iostream>


Application::Application() {
	m_rmSystem = std::make_unique<RailwayManagementSystem>();
}

void Application::Run() {
	int choice;
	do {
		displayMenu();
		std::cin >> choice;

		switch (choice) {
		case 1:
			std::cout << "doing smth..." << std::endl;
			break;
		default:
			std::cout << "exiting..." << std::endl;
			break;
		}

	} while (choice != 3);
}

void Application::displayMenu() {
	// Display the menu
	std::cout << "\n=== Menu ===" << std::endl;
	std::cout << "1. Display message" << std::endl;
	std::cout << "2. Perform action" << std::endl;
	std::cout << "3. Exit" << std::endl;
	std::cout << "Enter your choice (1-3): ";
}