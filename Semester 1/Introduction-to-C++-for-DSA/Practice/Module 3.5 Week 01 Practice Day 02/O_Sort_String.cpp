/*
    Problem: O
    Title: Sort String
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main()
{    
    int n;
    cin >> n;
    char str[n+1];
    cin >> str;
    sort(str, str + strlen(str));
    cout << str << endl;
    return 0;
}