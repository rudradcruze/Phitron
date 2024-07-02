/*
    Final Exam
    Problem: 3
    Title: Reverse It
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{

    int n;
    cin >> n;

    Student st[n];

    for (int i = 0; i < n; i++)
    {
        cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id;
    }

    for (int i = 0; i < n / 2; i++)
    {
        swap(st[i].s, st[n - i - 1].s);
    }

    for (int i = 0; i < n; i++)
    {
        cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " " << st[i].id << endl;
    }

    return 0;
}