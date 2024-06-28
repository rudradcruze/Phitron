/*
    Problem: 
    Title: Min Object Find
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

    // int min_marks = INT_MAX;
    Student min_student;
    Student max_student;
    min_student.marks = INT_MAX;
    max_student.marks = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i].marks < min_student.marks)
        {
            min_student = a[i];
        }

        if (a[i].marks > max_student.marks)
        {
            max_student = a[i];
        }
    }

    cout << "-------Minimum-------" << endl;
    cout << min_student.name << " " << min_student.roll << " " << min_student.marks << endl;
    cout << "-------Maximum-------" << endl;
    cout << max_student.name << " " << max_student.roll << " " << max_student.marks << endl;

    // cout << "Minimum Marks: " << min_marks << endl;


    return 0;
}