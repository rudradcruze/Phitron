/*
    Problem:
    Title: String
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // char str[100] = "hello";
    // cout << str << endl;
    // cout << strlen(str) << endl;

    string s1 = "hello";
    string s2 = "hello";
    if (s1 == s2)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Not Equal" << endl;
    }
    cout << s1 << " " << s2 << endl;

    return 0;
}