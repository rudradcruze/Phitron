/*
    Problem: Problem_2
    Title: Reverse Data
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

    Student() {}
    Student(string n, int r, int m) : name(n), roll(r), marks(m) {}
};

int main()
{
    int N;
    cin >> N;

    Student *students = new Student[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> students[i].name >> students[i].roll >> students[i].marks;
    }

    for (int i = N - 1; i >= 0; --i)
    {
        cout << students[i].name << " " << students[i].roll << " " << students[i].marks << endl;
    }

    delete[] students;

    return 0;
}