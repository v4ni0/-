// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <fstream>

using namespace std;

void writeArrayToFile(int* array, int size) 
{
	FILE* fptr;
	fptr = fopen("array.txt", "w");

	for (int i = 0; i < size; i++)
	{
		fprintf(fptr, "%d", array[i]);
		fprintf(fptr, " ");
	}
	fclose(fptr);
}
int main()
{
	int array[] = { 1,2,3,4,5,6 };
	int size = 6;
	writeArrayToFile(array,size);
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
