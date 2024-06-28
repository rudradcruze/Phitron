/*
    Problem:
    Title: Custom Sort
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

class Frequency
{
public:
    char c;
    int count;
};

bool compare(Frequency a, Frequency b)
{
    if (a.count == b.count)
    {
        return a.c < b.c;
    }
    return a.count > b.count;
}

int main()
{
    string s;
    cin >> s;

    Frequency freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i].c = (char)(i + 'a');
        freq[i].count = 0;
    }

    for (char c : s)
    {
        freq[c - 'a'].count++;
    }

    sort(freq, freq + 26, compare);

    for (int i = 0; i < 26; i++)
    {
        if (freq[i].count > 0)
        {
            for (int j = 0; j < freq[i].count; j++)
            {
                cout << freq[i].c;
            }
        }
    }

    return 0;
}