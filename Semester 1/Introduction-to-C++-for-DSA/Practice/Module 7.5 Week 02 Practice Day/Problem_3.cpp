/*
    Problem: Problem_3
    Title: Word Count
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sentence;
    string word;

    getline(cin, sentence);

    cin >> word;

    int count = 0;
    stringstream ss(sentence);
    string current_word;

    while (ss >> current_word)
    {
        if (current_word == word)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}