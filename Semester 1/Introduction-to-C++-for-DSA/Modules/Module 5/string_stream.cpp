/*
    Problem: 
    Title: String Stream
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    while (ss >> word)
        cout << word << endl;

    cout << "----------------" << endl;
    cout << s << endl;

    return 0;
}