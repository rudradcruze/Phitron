/*
    Problem:
    Title:
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x =  10;

    switch(x%2)
    {
        case 0:
            cout << "x is even" << endl;
            break;
        case 1:
            cout << "x is odd" << endl;
            break;
    }

    return 0;
}