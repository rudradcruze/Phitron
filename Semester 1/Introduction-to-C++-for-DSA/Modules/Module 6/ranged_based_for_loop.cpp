/*
    Problem: 
    Title: Ranged Based For Loop
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    // for (int i = 0; i< s.size(); i++)
    // {
    //     cout << s[i] << " ";
    // }

    for (char c : s)
        cout << c << " ";

    return 0;
}