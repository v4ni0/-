#pragma once
#include "Menu.h"
class RobotWaiter
{
private:
	static int nextId;
	int id;
	char* name;
	Menu menu;
	Dish* orders;
	int numberOfOrders;
	int ordersCapacity;
	void resizeOrders();
public:
	RobotWaiter(const char* name,Menu menu);
	void greet();
	void showMenu();
	void makeOrder(const char* name);
	double getBill();
};

