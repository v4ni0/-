#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<cstring>
#include<iostream>
class Dish
{
private:
	char* name;
	double price;
public:
	Dish() = default;
	Dish(const char* name, double price);
	Dish(Dish const& other);
	Dish& operator=(Dish const& other);
	~Dish();
	friend std::ostream& operator<<(std::ostream& os, Dish const& dish);
};

