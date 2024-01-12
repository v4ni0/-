// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>

using namespace std; 

int sum(int matrix[][100],int k, int n) {
    int sum = 0;
    for (size_t i = k; i < n-k; i++)
    {
        for (size_t j = k; j < n-k; j++)
        {
            sum += matrix[i][j];
        }
        
    }
}
void equalRings(int matrix[][100],int x,int maxX,int*& coords,int target, int size) {
    if (x<maxX)
    {
        return;
    }
    if (sum(matrix,x,size)!=target)
    {
        coords[0] = x;
        coords[1] = x;
        return;
    }
    else
    {
        equalRings(matrix, x - 1, maxX, coords,target,size);
    }

}
int main()
{
    int n=5;
    //cin >> n;
    int coords[2] = {-1,-1};
    int matrix[5][5];
    int target=0;
    if (n%2==0)
    {
        for (size_t i = n/2-1; i <= n/2; i++)
        {
            for (size_t j = n / 2 - 1; j <= n / 2; j++)
            {
                target += matrix[i][j];
            }
           
        }
    }
    else
    {
        target = matrix[n/2-1][n/2-1];
    }

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
