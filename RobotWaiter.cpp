#include "RobotWaiter.h"

int RobotWaiter::nextId = 0;
void RobotWaiter::resizeOrders()
{
}
RobotWaiter::RobotWaiter(const char* name, Menu menu):id(nextId++),numberOfOrders(0),ordersCapacity(1)
{
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	this->menu = menu;
	orders = new Dish[ordersCapacity];
}
void RobotWaiter::greet()
{
	std::cout << "Welcome in our restaurant. My name is "<<name;
}

void RobotWaiter::showMenu()
{
	menu.printMenu();
}

