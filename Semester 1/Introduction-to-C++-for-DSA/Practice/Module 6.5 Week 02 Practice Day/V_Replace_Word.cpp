/*
    Problem: V
    Title: Replace Word
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    while (S.find("EGYPT") != -1)
        S.replace(S.find("EGYPT"), 5, " ");

    cout << S << endl;

    return 0;
}