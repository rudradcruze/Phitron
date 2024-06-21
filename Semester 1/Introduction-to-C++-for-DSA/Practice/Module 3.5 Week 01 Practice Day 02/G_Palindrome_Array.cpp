/*
    Problem: G
    Title: Palindrome Array
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

    int i = 0, j = n - 1;

    while (i < j)
    {
        if (array[i] != array[j])
        {
            cout << "NO" << endl;
            return 0;
        }
        i++;
        j--;
    }
    cout << "YES" << endl;

    return 0;
}