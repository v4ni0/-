// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
#include "ConsoleApplication7.h"

using namespace std;

int sum(int** matrix, int k, int n) {
    int sum = 0;
    for (size_t i = k; i < n - k; i++)
    {
       
        sum += matrix[i][k];
        sum += matrix[k][i];
        sum += matrix[i][n-k-1];
        sum += matrix[n-k-1][i];
        

    }
    sum -= matrix[k][k];
    sum -= matrix[k][n-k-1];
    sum -= matrix[n-k-1][k];
    sum -= matrix[n-k-1][n-k-1];
    return sum;
}
void equalRings(int** matrix, int x, int* coords, int target, int size) {
    if (x < 0)
    {
        return;
    }
    if (sum(matrix, x, size) != target)
    {
        coords[0] = x;
        coords[1] = x;
        return;
    }
    else
    {
        equalRings(matrix, x - 1, coords, target, size);
    }

}
int main()
{
    int n = 5;
    //cin >> n;
    int coords[2] = { -1,-1 };
    
    int row1[] = { 1,2,-3,5,-2 };
    int row2[] = {-5,10,5,-2,1 };
    int row3[] = { 1,13,20,0,-3 };
    int row4[] = { 2,-7,5,10,3 };
    int row5[] = { 10,2,2,3,1 };
    int* matrix[] = { row1,row2,row3,row4,row5 };
    
    int target = 0;
    int startIndex;

    if (n % 2 == 0)
    {
        for (size_t i = n / 2 - 1; i <= n / 2; i++)
        {
            for (size_t j = n / 2 - 1; j <= n / 2; j++)
            {
                target += matrix[i][j];
            }

        }
        startIndex = n / 2 - 2;
    }
    else
    {
        target = matrix[n / 2 ][n / 2 ];
        startIndex = n / 2 - 1;
    }
    equalRings(matrix,startIndex,coords,target,n);
    
    cout << coords[0] << " " << coords[1];
    
    /*for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;*/

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
