/*
    Problem:
    Title: Class and Object
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        char name[100];
        int roll;
        double cgpa;
};

int main()
{
    Student s1, s2;

    cin.getline(s1.name, 100);
    cin >> s1.roll >> s1.cgpa;

    cin.ignore();

    cin.getline(s2.name, 100);
    cin >> s2.roll >> s2.cgpa;


    // s1.roll = 1;
    // s1.cgpa = 9.5;
    // char temp[100] = "Francis";
    // strcpy(s1.name, temp);

    cout << "NAME: " << s1.name << ", ROLL: " << s1.roll << ", CGPA: " << s1.cgpa << endl;
    cout << "NAME: " << s2.name << ", ROLL: " << s2.roll << ", CGPA: " << s2.cgpa << endl;


    return 0;
}