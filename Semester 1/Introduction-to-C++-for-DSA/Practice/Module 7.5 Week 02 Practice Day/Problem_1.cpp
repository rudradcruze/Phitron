/*
    Problem: Problem_1
    Title: Sort Students
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

bool compareStudents(const Student &a, const Student &b)
{
    if (a.marks == b.marks)
    {
        return a.roll < b.roll;
    }
    return a.marks > b.marks;
}

int main()
{
    int N;
    cin >> N;

    Student *students = new Student[N];

    for (int i = 0; i < N; ++i)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        students[i] = Student(name, roll, marks);
    }

    sort(students, students + N, compareStudents);

    for (int i = 0; i < N; ++i)
    {
        cout << students[i].name << " " << students[i].roll << " " << students[i].marks << endl;
    }

    delete[] students;

    return 0;
}