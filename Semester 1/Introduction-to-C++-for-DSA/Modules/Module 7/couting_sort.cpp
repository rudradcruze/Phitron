/*
    Problem:
    Title: Couting Sort
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int freq[26] = {0};

    for (char c : s)
    {
        freq[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < freq[i]; j++)
        {
            cout << (char)(i + 'a');
        }
    }

    return 0;
}