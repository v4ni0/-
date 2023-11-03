// week5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
using namespace std;

//ZADACHA1
// int Min(int arr[],int n) {
//	int min = arr[0];
//	
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	return min;
//
//}

	/*ZADACHA2	
	int Average(int arr[],int n) {
		int min = arr[0];
		int max = arr[0];
		int sum = 0;
		int length = 0;
		int index = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < min)
			{
				min = arr[i];
			}
		}
		return min;
	
	}*/

bool Contains(int arr[],int size,) {

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == n)
		{
			n = arr[i];
		}
	}
}
	int main()
	{
		int arr[6] = {2,2,3,4,1,1};
		int avg = Average(arr,6);
	    std::cout << avg;
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
