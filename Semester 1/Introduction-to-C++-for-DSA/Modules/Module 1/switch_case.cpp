/*
    Problem:
    Title: Switch Case
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x = 3;
    switch (x)
    {
        case 1:
            cout << "x is 1" << endl;
            break;
        case 2:
            cout << "x is 2" << endl;
            break;
        case 3:
            cout << "x is 3" << endl;
            break;
        default:
            cout << "x is not 1, 2 or 3" << endl;
    }

    return 0;
}