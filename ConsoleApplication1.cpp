// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>
#include <iomanip>
#include "Student.h"
using namespace std;
//struct Student {
//    int fn, kurs;
//    double averageGrade;
//    void initStudent();
//    void print();
//};
//void Student::initStudent()
//{
//    cout << "fnumber:";
//    cin >> fn;
//    assert(fn>=10000&&fn<=99999);
//    cout <<endl<< "kurs:";
//    cin >> kurs;
//    assert(kurs>=1 && kurs <= 4);
//    cout << endl << "average grade:";
//    cin >> averageGrade;
//    assert(averageGrade >= 2 && averageGrade <= 6);
//
//}
//void Student::print()
//{
//    cout << "fnumber:" << fn<<endl;
//    cout << "kurs:" << kurs<<endl;
//    cout << "average grade:" <<setprecision(3)<< averageGrade<<endl;
//}

struct Group {
    int number=0;
    double groupAverage=0;
    Student* students= new Student[number];
    void createGroup();
    void calculateAverage();
};
void Group::createGroup()
{
    for (size_t i = 0; i < number; i++)
    {
        students[i].initStudent();
    }
}

void Group::calculateAverage()
{
    double sum;
    for (int i = 0; i < number; i++)
    {
        sum += students[i].averageGrade;
    }
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

