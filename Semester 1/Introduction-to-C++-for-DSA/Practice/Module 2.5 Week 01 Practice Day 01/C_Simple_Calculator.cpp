/*
    Problem: C
    Title: Simple Calculator
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;

    cout << a << " + " << b << " = " << (long long int)(a + b) << endl;
    cout << a << " * " << b << " = " << (long long int)(a * b) << endl;
    cout << a << " - " << b << " = " << (long long int)(a - b) << endl;

    return 0;
}