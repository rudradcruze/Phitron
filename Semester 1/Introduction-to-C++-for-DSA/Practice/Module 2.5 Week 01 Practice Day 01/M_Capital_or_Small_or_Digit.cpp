/*
    Problem: M
    Title: Capital or Small or Digit
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    char ch;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    } else if (ch >= 'a' && ch <= 'z')
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    } else if (ch >= '0' && ch <= '9')
    {
        cout << "IS DIGIT" << endl;
    }

    return 0;
}