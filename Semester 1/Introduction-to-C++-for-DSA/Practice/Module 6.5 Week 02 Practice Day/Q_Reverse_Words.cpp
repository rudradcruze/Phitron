/*
    Problem: Q
    Title: Reverse Words
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    getline(cin, S);

    stringstream ss(S);
    string word;
    string result;

    while (ss >> word)
    {
        reverse(word.begin(), word.end());

        if (!result.empty())
            result += " ";

        result += word;
    }

    cout << result << endl;

    return 0;
}