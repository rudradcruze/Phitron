/*
    Problem:
    Title: Dynamic Variable
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int * fun() {
    int *p = new int;
    cout << "fun: " << p << endl;
    *p = 10;
    return p;
}

int main()
{
    int *q = fun();
    cout << "main: " << q << endl;
    cout << "main: " << *q << endl;
    int *a = new int;
    *a = 10;
    cout << *a << endl;
    delete a; // delete the dynamic variable

    float *b = new float;
    *b = 10.10;
    cout << *b << endl;

    return 0;
}