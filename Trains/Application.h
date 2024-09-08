#pragma once
#include <memory>
#include "RailwayManagementSystem.h"


using rmUptr = std::unique_ptr<RailwayManagementSystem>;

class Application
{
public:
	Application();
	void Run();
private:
	// members
	 rmUptr m_rmSystem;
	// methods
	 void displayMenu();
};

