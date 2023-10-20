// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	/*Zadacha1
	int max = 0;
	int a, b, c;
	cin >> a >> b >> c;
	if (a>max)
	{
		max = a;
	}
	if (b>max)
	{
		max = b;
	}
	if (c>max)
	{
		max = c;
	}
	cout << max;*/

	/*Zadacha2
	int n, m;

	cin >> n>>m;
	bool contains = false;
	while (n!=0)
	{
		if (n%10==m)
		{
			contains = true;
			break;
		}
		n /= 10;

	}
	if (!contains)
	{
		cout << false;
	}
	else
	{
		cout << true;
	}*/

	/*ZADACHA4
	int n;
	cin >> n;
	int a = n / 100;
	int b = (n / 10)/10;
	int c = n % 10;
	if (a<=b&&b<=c)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}*/

	/*ZADACHA5
	int n;
	cin >> n;
	if (n>=1001&&n<8888)
	{
		int count = 0;
		int m;
		cin >> m;
		while (n != 0)
		{
			if (n % 10 == m)
			{
				count++;

			}
			n /= 10;
		}
		cout << count;
	}
	else
	{
		cout << "Error message";
	}*/

	/*ZADACHA6
	int firstDigit, secondDigit, thirdDigit, fourthDigit, lastDigit,n;
	cin >> n;
	if (n > 0)
	{


		firstDigit = n / 10000;
		secondDigit = (n % 10000) / 1000;
		thirdDigit = (n % 1000) / 100;
		fourthDigit = (n % 100) / 10;
		lastDigit = n % 10;
		if ((firstDigit == lastDigit) && (secondDigit == fourthDigit))
		{
			cout << boolalpha << true;
		}
		else
		{
			cout << boolalpha << false;
		}
	}
	else
	{
		cout << boolalpha << false;
	}*/

	//int n;
	//cin >> n;
	//if (n<25)
	//{
	//	cout << "2.00";
	//}
	//if (n>=25&&n<40)
	//{
	//	cout << "3.00";
	//}
	//if (n >= 40 && n < 60)
	//{
	//	cout << "4.00";
	//}
	//
	//if (n >= 60 && n < 80)
	//{
	//	cout << "5.00";
	//}
	//if (n>=80)
	//{
	//	cout << "6.00";

	//ZADACHA8
	// int a, b, c;
	//cin >> a>>b>>c;
	//if (a+b>c&&a+c>b&&b+c>a)
	//{
	//	cout << boolalpha << true;
	//}
	//else
	//{
	//	cout << boolalpha << false;
	//}
	//
	//
	//
	//
	//

	//ZADACHA9
	// char c;
	//cin >> c;
	//int n = (int)c;
	//if (n>=65&&n<=90)
	//{
	//	cout << "Capital letter";
	//
	//}
	//else if (n >= 97 && n <= 122)
	//{
	//	cout << "Small letter";
	//
	//}
	//else if (n >= 48 && n <= 57)
	//{
	//	cout << "decimal";
	//
	//}
	//else
	//{
	//	cout << "other";
	//}
	
	//ZADACHA10
	//char c;
	//cin >> c;
	//c = c - 32;
	//cout << c; ne e dobavena validaciq


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
