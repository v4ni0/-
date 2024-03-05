#pragma once
#include <iostream>
#include <cassert>
#include <iomanip>
using namespace std;
struct Student {
    int fn, kurs;
    double averageGrade;
    void initStudent();
    void print();
};
void Student::initStudent()
{
    cout << "fnumber:";
    cin >> fn;
    assert(fn >= 10000 && fn <= 99999);
    cout << endl << "kurs:";
    cin >> kurs;
    assert(kurs >= 1 && kurs <= 4);
    cout << endl << "average grade:";
    cin >> averageGrade;
    assert(averageGrade >= 2 && averageGrade <= 6);

}
void Student::print()
{
    cout << "fnumber:" << fn << endl;
    cout << "kurs:" << kurs << endl;
    cout << "average grade:" << setprecision(3) << averageGrade << endl;
}
