/*
    Problem:
    Title: Function Return
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        int roll;
        int classs;
        double cgpa;

    Student(int roll, int classs, double cgpa)
    {
        this->roll = roll;
        this->classs = classs;
        this->cgpa = cgpa;
    }
};

Student fun()
{
    Student s(1, 12, 9.5);
    return s;
}

// cannot possible to return the address of a local variable
// Student* fun2()
// {
//     Student s1(2, 52, 5.5);
//     Student* p = &s1;
//     return p;
// }

int main()
{
    Student ans = fun();
    // Student* ans2 = fun2();

    cout << "ROLL: " << ans.roll << ", CLASS: " << ans.classs << ", CGPA: " << ans.cgpa << endl;

    // cout << "ROLL: " << (*ans2).roll << ", CLASS: " << ans2->classs << ", CGPA: " << ans2->cgpa << endl;

    return 0;
}