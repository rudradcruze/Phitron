/*
    Final Exam
    Problem: 2
    Title: Find Jessica
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int flag = 0;

    stringstream ss(s);

    while (ss >> s)
    {
        if (s == "Jessica")
        {
            flag = 1;
            break;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}