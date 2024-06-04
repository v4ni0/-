#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<cstring>
#include<iostream>
#include "Dish.h"
class Menu
{
private:

	Dish* dishes;
	int number;

public:
	Menu() = default;
	Menu(Dish dishes[], int number);
	Menu(Menu const&other);
	Menu& operator=(Menu const&other);
	~Menu();
	void printMenu();
};

