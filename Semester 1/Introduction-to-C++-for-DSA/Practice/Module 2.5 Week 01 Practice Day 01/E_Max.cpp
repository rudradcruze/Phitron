/*
    Problem: E
    Title: Max
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin >> n;

    int arr[n];
    int max_value = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        max_value = max(max_value, arr[i]);
    }

    cout << max_value << endl;

    return 0;
}