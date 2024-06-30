/*
    Problem: B
    Title: ICPC Balloons
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
        int N;
        cin >> N;

        int array[26] = {0};

        for (int i = 0; i < N; i++)
        {
            char c;
            cin >> c;
            if (array[c - 'A'] == 0)
                array[c - 'A'] = 2;
            else
                array[c - 'A'] += 1;
        }
        int sum = 0;
        for (int i = 0; i < 26; i++)
            sum += array[i];

        cout << sum << endl;
    }

    return 0;
}