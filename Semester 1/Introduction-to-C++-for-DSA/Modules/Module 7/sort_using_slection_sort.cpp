/*
    Problem:
    Title: Sort Using Selection Sort
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{

    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j].marks > a[i].marks)
            {
                swap(a[j], a[i]);
            }
            if (a[j].marks == a[i].marks)
            {
                if (a[j].roll < a[i].roll)
                {
                    swap(a[j], a[i]);
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}