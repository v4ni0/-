#include "Dish.h"

Dish::Dish(const char* name, double price):name(new char[strlen(name)+1]),price(price)
{
	strcpy(this->name,name);
}

Dish::Dish(Dish const& other):name(new char[strlen(other.name) + 1]), price(other.price)
{
	strcpy(this->name, other.name);
}

Dish& Dish::operator=(Dish const& other)
{
	if (this!=&other)
	{
		delete[] name;
		name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);
		price = other.price;
	}
	return *this;
	
		
}

Dish::~Dish()
{
	delete[] name;
}

std::ostream& operator<<(std::ostream& os, Dish const& dish)
{
	os << dish.name << " " << dish.price;
	return os;
}
