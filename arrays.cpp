// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    /* int n,k;
     cin >> n;
     if (n<=0)
     {
         throw invalid_argument("Error");
     }
     int arr[20];
     for (int i = 0; i < n; i++)
     {
         cin >> arr[i];
     }
     cin >> k;
     for (int i = 0; i <n ; i++)
     {
         arr[k - 1] = arr[k];
     }
     n = n - 1;
     for (int i = 0; i < n; i++)
     {
         cout << arr[i]<<" ";
     }*/

     /* int n;
      cin >> n;
      bool isIncreasing = true;
      bool isDecreasing = true;
      if (n <= 0)
      {
          throw invalid_argument("Error");
      }
      int arr[20];
      for (int i = 0; i < n; i++)
      {
          cin >> arr[i];
      }
      for (int i = 1; i < n; i++)
      {
          if (arr[i]>arr[i-1])
          {
              isDecreasing = false;
          }
          if (arr[i] < arr[i - 1])
          {
              isIncreasing = false;
          }
      }
      if (isIncreasing&&isDecreasing)
      {
          cout << "The array is equal";
      }
      else if (isIncreasing)
      {
          cout << "The array is increasing";
      }
      else if (isDecreasing)
      {
          cout << "The array is dercreasing";
      }
      else
      {
          cout << "Array is nor increaing nor decreasing";
      }*/

      ///* int n, k;
      // cin >> n;
      // if (n <= 0)
      // {
      //     throw invalid_argument("Error");
      // }
      // int arr[20];
      // for (int i = 0; i < n; i++)
      // {
      //     cin >> arr[i];
      // }
      // cin >> k;
      // for (int i = 0; i < n; i++)
      // {
      //     if (arr[i]==k)
      //     {
      //         
      //         for (int j = i; j < n; j++)
      //         {
      //             arr[j] = arr[j + 1];
      //         }
      //         n = n - 1;
      //         i--;
      //     }
      // }*/
      // for (int i = 0; i < n; i++)
      // {
      //     cout << arr[i] << " ";
      // }

       /*int n, k,m;
       cin >> n;
       if (n <= 0)
       {
           throw invalid_argument("Error");
       }
       int arr[20];
       for (int i = 0; i < n; i++)
       {
           cin >> arr[i];
       }
       cout << "Vavedete element m ";
       cin >> m;
       cout << "Vavaedete position k ";
       cin >> k;
       n = n + 1;
       for (int i = n-1; i >= k+1; i--)
       {
           arr[i] = arr[i - 1];
       }
       arr[k] = m;
       for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }*/

    /*int n, target;
    int firstIndex = 0, secondIndex = 0;
    cin >> n;
    int arr[20];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

    }
    cin >> target;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                firstIndex = i;
                secondIndex = j;
            }
        }
    }
    cout << "[" << firstIndex << "," << secondIndex << "]";*/

int n;
int biggestRow=1;
cin >> n;
int arr[20];
for (int i = 0; i < n; i++)
{
    cin >> arr[i];

}
int currentCounter = 1;
for (int i = 1; i < n; i++)
{
    if (arr[i]>arr[i-1])
    {
        currentCounter++;
    }
    else
    {
         currentCounter = 1;
    }
    if (currentCounter>biggestRow)
    {
        biggestRow = currentCounter;
    }
}
cout << biggestRow;
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
