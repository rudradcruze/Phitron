/*
    Problem:
    Title: Constructor
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
        (*this).roll = roll; // approach 1 (dereference first then access the variable)
        this->classs = classs; // approach 2
        this->cgpa = cgpa;
    }
};

int main()
{

    Student rudra(1, 12, 9.5);
    Student francis(2, 12, 9.5);

    cout << "ROLL: " << rudra.roll << ", CLASS: " << rudra.classs << ", CGPA: " << rudra.cgpa << endl;
    cout << "ROLL: " << francis.roll << ", CLASS: " << francis.classs << ", CGPA: " << francis.cgpa << endl;


    return 0;
}