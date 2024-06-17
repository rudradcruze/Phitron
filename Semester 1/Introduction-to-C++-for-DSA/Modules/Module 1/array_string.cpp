/*
    Problem:
    Title: Array String
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <utility>
#include <string.h>
#include <string>
using namespace std;

int main()
{

    char s[1000];
    // cin >> s;
    int a;
    cin >> a;
    getchar();
    cin.getline(s, 1000);
    cout << a << endl;
    cout << s << endl;
    cout << strlen(s) << endl;

    // int n;
    // cin >> n;
    // int arr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}