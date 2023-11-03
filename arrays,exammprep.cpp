// arrays,exammprep.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[6] = { 1,3,68,4,0,69 };
const int MAX_SIZE = 50;
//ZADACHA2
//int Max(int arr[], int n) {
//
//	int max = arr[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}return max;
//}



int main()
{
		
  /*ZADACHA1
  int n;
    cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		
	}
	for (int i = 0; i < n-1; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << arr[n - 1] << endl;
	for (int i = n-1; i >=1; i--)
	{
		
		cout << arr[i] << " ,";
	}
	cout << arr[0] << endl;*/

	/*ZADACHA3
	int n,k;
	cin >> n>>k;
	int arr[MAX_SIZE];
	int copy[MAX_SIZE];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

	}
	for (int i = 0; i <k-1; i++)
	{
		copy[i] = arr[i];
	}
	for (int i = k-1; i < n-1; i++)
	{
		copy[i] = arr[i + 1];
	}
	for (int i = 0; i < n-1; i++)
	{
		cout << copy[i] << " ";
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
