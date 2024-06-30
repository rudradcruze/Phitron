/*
    Problem: F
    Title: Equation
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, n;
    cin >> x >> n;

    long long sum = 0;
    for (int i = 2; i <= n; i += 2)
    {
        if (i == 0)
        {
            sum += (pow(x, i) - 1);
        }
        else
        {
            sum += pow(x, i);
        }
    }

    cout << sum << endl;

    return 0;
}