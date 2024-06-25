/*
    Problem:
    Title: Iterator
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    // string::iterator it; // (iterator)
    cin >> s;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << " ";
    // }

    // cout << *s.begin() << endl;
    // cout << *(s.end()-1) << endl;

    // for (it = s.begin(); it != s.end(); it++) // (iterator)
    //     cout << *it << " ";

    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    return 0;
}