/*
    Problem:
    Title: Element Access
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    string s;
    cin >> s;
    cout << s[0] << endl;
    cout << s.at(0) << endl;
    cout << s.back() << endl;
    cout << s[s.size() - 1] << endl;
    s.pop_back();
    cout << s << endl;
    cout << s.front() << endl;

    return 0;
}