#include "Menu.h"



Menu::Menu(Dish dishes[], int number)
{
	this->dishes = new Dish[number];
	for (size_t i = 0; i < number; i++)
	{
		this->dishes[i] = dishes[i];
	}
}

Menu::~Menu()
{
	delete[] dishes;
}

void Menu::printMenu()
{
	for (size_t i = 0; i < number; i++)
	{
		std::cout << dishes[i] << std::endl;
	}
}
