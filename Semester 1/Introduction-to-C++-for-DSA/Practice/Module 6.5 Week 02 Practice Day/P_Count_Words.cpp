/*
    Problem: P
    Title: Count Words
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    getline(cin, S);

    int word_count = 0;
    bool in_word = false;

    for (char c : S)
    {
        if (isalpha(c))
        {
            if (!in_word)
            {
                in_word = true;
                word_count++;
            }
        }
        else
        {
            in_word = false;
        }
    }

    cout << word_count << endl;

    return 0;
}