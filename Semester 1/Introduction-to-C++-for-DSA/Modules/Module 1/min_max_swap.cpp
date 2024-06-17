/*
    Problem:
    Title:
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <utility>
using namespace std;

void my_swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;
    swap(a, b);
    // my_swap(a, b);

    cout << "a: " << a << " b: " << b << endl;
    
    // int temp = a;
    // a = b;
    // b = temp;
    // cout << "a: " << a << " b: " << b << endl;

    // int c = max(a, b);
    // int d = min(a, b);

    // int e,f,g,h;
    // cin >> e >> f >> g >> h;

    // cout << "a: " << a << " b: " << b << endl;
    // cout << "c: " << c << " d: " << d << endl;
    // cout << max({e,f,g,h}) << endl;
    // cout << min({e,f,g,h}) << endl;

    return 0;
}