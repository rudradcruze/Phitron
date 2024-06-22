/*
    Exam: Mid Term Exam
    Problem: 5
    Title: Choose Three
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, s;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool found = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == s)
                    {
                        found = true;
                        break;
                    }
                }
                if (found)
                {
                    break;
                }
            }
            if (found)
            {
                break;
            }
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }


    return 0;
}