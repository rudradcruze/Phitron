/*
    Problem:
    Title: Dynamic Object
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

Student* fun()
{
    Student* s = new Student(11, 122, 6.5);
    return s;
}

int main()
{
    
    Student* s = new Student(1, 12, 9.5);
    cout << "ROLL: " << s->roll << ", CLASS: " << s->classs << ", CGPA: " << s->cgpa << endl;

    // Using function
    Student* s2 = fun();
    cout << "ROLL: " << s2->roll << ", CLASS: " << s2->classs << ", CGPA: " << s2->cgpa << endl;


    return 0;
}