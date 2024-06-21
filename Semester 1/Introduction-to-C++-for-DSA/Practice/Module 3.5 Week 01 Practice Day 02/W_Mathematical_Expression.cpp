/*
    Problem: W
    Title: Mathematical Expression
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int a, b, d;
    char c, e;
    
    cin >> a >> c >> b >> e >> d;

    if (c == '+')
    {
        if (a + b == d)
            cout << "Yes";
        else
            cout << a+b;
    }
    else if (c == '-')
    {
        if (a - b == d)
            cout << "Yes";
        else
            cout << a-b;
    }
    else if (c == '*')
    {
        if (a * b == d)
            cout << "Yes";
        else
            cout << a*b;
    }

    return 0;
}