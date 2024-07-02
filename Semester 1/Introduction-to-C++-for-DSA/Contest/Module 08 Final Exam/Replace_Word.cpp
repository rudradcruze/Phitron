/*
    Final Exam
    Problem: 1
    Title: Replace Word
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, r;
        cin >> s >> r;
        while (s.find(r) != -1)
            s.replace(s.find(r), r.size(), "#");

        cout << s << endl;
    }

    return 0;
}