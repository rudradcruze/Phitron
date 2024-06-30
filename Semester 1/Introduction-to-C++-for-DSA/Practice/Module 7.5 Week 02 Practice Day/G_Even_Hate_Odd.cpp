/*
    Problem: G
    Title: Even Hate Odd
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        int array[n];
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
            if (array[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        int count = n / 2;
        if (n % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else if (count - even == 0)
        {
            cout << "0" << endl;
        }
        else if (count - even > 0)
        {
            cout << count - even << endl;
        }
        else if (count - even < 0)
        {
            cout << count - odd << endl;
        }
    }

    return 0;
}