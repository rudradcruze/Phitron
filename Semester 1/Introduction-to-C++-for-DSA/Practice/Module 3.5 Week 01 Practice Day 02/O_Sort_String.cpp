/*
    Problem: O
    Title: Sort String
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int array[26] = {0};
    int size;
    cin >> size;

    char c;

    for (int i = 0; i < size; i++)
    {
        cin >> c;
        array[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < array[i]; j++)
        {
            cout << (char)('a' + i);
        }
    }

    return 0;
}