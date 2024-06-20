/*
    Problem:
    Title: Sort Array
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    sort(array, array + n); // assending order
    sort(array, array + n, greater<int>()); // decending order

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}