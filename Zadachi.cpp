#include<string>;
#include <sstream>;
#include <iomanip>;
#include <iostream>
#include <cmath>
using namespace std;

int main() {

        /* Zadacha 1
        cout << "Ivan Ivanov"<<endl;
        int age=19;
        cout << age << "->" << &age <<" "<< sizeof(age);*/

        /* Zadacha 2 .
        cout << "The size of char is " << sizeof(char) <<endl;
         cout << "The size of short is " << sizeof(short) <<  endl;
         cout << "The size of int is " << sizeof(int) <<  endl;
         cout << "The size of long long is " << sizeof(long long) << endl;
         cout << "The size of long is " << sizeof(long) <<  endl;
         cout << "The size of long double is " << sizeof(long double) << endl;
         cout << "The size of double is " << sizeof(double)  << endl;
         cout << "The size of float is " << sizeof(float)  << endl;
         cout << "The size of bool is " << sizeof(bool) << endl;*/

         /*ZADACHA 3
         cout << "The maximum limit of int data type:" << INT_MAX<< endl;
         cout << "The MINIMUM limit of int data type:" << INT_MIN << endl;
         cout << "The maximum limit of unsigned int data type:" << UINT_MAX << endl;
         cout << "The maximum limit of long long data type:" <<LLONG_MAX << endl;
         cout << "The MINIMUM limit of long long data type:" << LLONG_MIN << endl;
         cout << "The Bits contain in char data type:" << sizeof(char)*CHAR_BIT << endl;
         cout << "The maximum limit of SIGNED CHAR data type:" << SCHAR_MAX << endl;
         cout << "The MINIMUM limit of SIGNED CHAR data type:" << SCHAR_MIN << endl;
         cout << "The maximum limit of unsigned CHAR data type:" << UCHAR_MAX << endl;
         cout << "The MINIMUM limit of short  CHAR data type:" << SHRT_MIN << endl;
         cout << "The maximum limit of short  data type:" << SHRT_MAX << endl;
         cout << "The MINIMUM limit of UNSIGNED short  data type:" << USHRT_MAX << endl;*/


     /* ZADACHA 4*/
      /*int a, b;
      cin >> a >> b;
      cout << a+b<<endl;
      cout << abs(a-b)<<endl;
      cout << a % b<<endl;
      cout << double(a) / double(b)<<endl;
      cout << floor(double(a) / double(b))<<endl;
      int c = floor(double(a) / double(b));
      cout << ceil(double(a) / double(b))<<endl;
      cout <<pow(a,sqrt(b))<<endl;
      cout <<setprecision(6)<<log2(c)<<endl;*/

      /*ZADACHA5
      int a, b,c;
      cin >> a >> b;
      c = a;
      a = b;
      b = c;
      cout << a << " " << b;*/

      /*ZADACHA6
      int a;
      cin >> a;
      int firstDigit = a / 1000;
      a = a % 1000;
      int secondDigit = a / 100;
      a = a % 100;
      int thirdDigit = a / 10;
      int lastDigit = a % 10;
      cout << lastDigit << "-" << thirdDigit << "-" << secondDigit << "-" << firstDigit;*/

      /*ZADACHA7
      char a;
       cin >> a;
       cout << (int)a;*/

       /*ZADACHA8
       double a;
        cin >> a;
        cout << round(a);*/


        //ZADACHA 9
        //int n;
        //cin >> n;
        //bool a = true;
        //while (n/2>0)
        //{
        //    if (n == 1) {
        //        break;
        //    }
        //    if(n%2!=0)
        //    {
        //        a = false;
        //        break;
        //    }
        //    n = n / 2;

        //}

        //if(a==1) {
        //    cout << "true";
        //}
        //else
        //{
        //    cout << "false";
        //}

        /*ZADACHA 10*/
        /*int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout <<"wow";
        }
        else
        {
          cout <<"false";
          } */

        //ZADACHA11
        /* char c1, c2, c3;
        cin >> c1 >> c2 >> c3;
        cout <<c1 << c2 <<c3;*/

        //int n;
        //cin >> n;
        //stringstream ss;
        //string str;
        //while (n>0)
        //{
        //    
        //    
        //    ss << n % 2;
        //    
        //    n = n / 2;
        //    
        //}
        //
        //ss >> str;
        //reverse(str.begin(),str.end());
        //cout << str;

        //int n1, n2, n3, n4, n5;
        //cin >> n1 >> n2 >> n3 >> n4 >> n5;
        //if (n1 != n2&n1!=n3&n1!= n4 & n1 != n5) {
        //    cout << n1;
        //}
        //else if(n2 != n1&n2 != n3 & n2 != n4 & n2 != n5)
        //{
        //    cout << n2;
        //}
        //else if(n3 != n1 & n3 != n2 & n3 != n4 & n3 != n5)
        //{
        //    cout << n3;
        //
        //}
        //else if(n4 != n1 & n4 != n2 & n4 != n3 & n4 != n5)
        //{
        //cout << n4;
        //
        //
        //}
        //else
        //{
        //cout << n5;
        //
        //}


        //ZADACHA 14
        // int x, n;
        //cin >> x>> n;
        //cout << x / (1 / pow(2,n));

        //ZADACHA 15
        // int n;
        //cin >> n;
        //bool isTrue = true;
        //int reminder = -1;
        //while (n>0)
        //{
        //    if (reminder==n%2)
        //    {
        //        isTrue = false;
        //        break;
        //    }
        //    reminder = n % 2;
        //    n = n / 2;
        //
        //}
        //if (isTrue)
        //{
        //    cout << "true";
        //}
        //else
        //{
        //    cout << "false";
        //}








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
