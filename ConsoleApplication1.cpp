// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<cstring>


//ZADACHA4
// bool convertToStrNumber(char* str){// не се сетих как да стане ако повторенията на буква са повече от 10
//    int length = strlen(str);
//    int* arr = new int[length];
//    for (int i = 0; str[i]!= '\0'; i++)
//    {
//        int counter = 0;
//        for (int j = 0; str[j]!='\0'; j++)
//        {
//            if (str[i]==str[j])
//            {
//                counter++;
//            }
//        }
//        arr[i] = counter;
//    }
//    long sum = 0;
//    for (int i = 0; i < length; i++)
//    {
//        int counter = 0;
//        int copy = arr[i];
//        while (copy!=0)
//        {
//            copy /= 10;
//            counter++;
//        }
//        sum += counter;
//    }
//    if (sum>1024)
//    {
//        return false;
//    }
//
//    for (int i = 0; i < length; i++)
//    {
//        str[i] = arr[i]+48;
//    }
//    delete[] arr;
//    return true;
//
//}
int main()
{
    /*ZADACHA1
    int digitCounter = 0;
    int letterCounter = 0;
    int othersCounter = 0;
    char* str = new char[100];
    cin.getline(str, 100);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isdigit(str[i]))
        {
            digitCounter++;
        }
        else  if (isalpha(str[i]))
        {
            letterCounter++;
        }
        else
        {
            othersCounter++;
        }
    }
    cout << "digits:" << digitCounter << " letters:" << letterCounter << " others:" << othersCounter;*/

    /*ZADACHA2,ZADACHA3*/
     /*int n ;
     cin>>n;
     cin.ignore();
    char* str = new char[n+1]();
    cin.getline(str, n+1);
    int number = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        number = number * 10 + str[i] - '0';
    }
    cout << number;
    delete[] str;*/


    /*ZADACHA4
    char* str = new char[1024];
    cin.getline(str, 1024);
    convertToStrNumber(str);
    for (int i = 0; i < strlen(str); i++)
    {
        cout << str[i];
    }*/



    

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
