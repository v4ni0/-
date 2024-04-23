// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Vehicle
{
private:
    char* make;
    char* model;
    int horsepower;
public:
    Vehicle();
    Vehicle(const Vehicle& other);
    Vehicle& operator=(const Vehicle& other);
    const char* getMake() const;
    const char* getModel() const;
    const int getHorsepower() const;
    ~Vehicle();
};
Vehicle::Vehicle():make(nullptr),model(nullptr),horsepower(0)
{
    
}

Vehicle::Vehicle(const Vehicle& other):horsepower(other.horsepower)
{
    make = new char[strlen(other.make)+1];
    strcpy(make,other.make);
    model = new char[strlen(other.model) + 1];
    strcpy(model, other.model);
    
}

Vehicle& Vehicle::operator=(const Vehicle& other)
{
    if (this!=&other)
    {
        delete[] model;
        delete[] make;
        make = new char[strlen(other.make) + 1];
        strcpy(make, other.make);
        model = new char[strlen(other.model) + 1];
        strcpy(model, other.model);
    }
    return *this;
}

const char* Vehicle::getMake() const
{
    return make;
}

const char* Vehicle::getModel() const
{
    return model;
}

const int Vehicle::getHorsepower() const
{
    return horsepower;
}

Vehicle::~Vehicle()
{
    delete[] make;
    delete[] model;
}

int main()
{
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


