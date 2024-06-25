/*
    Problem: 
    Title: Function in class
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

class Person
{
    public:
        string name;
        int age;
        int marks1;
        int marks2;
        Person(string na, int ag, int mak1, int mak2)
        {
            name = na;
            age = ag;
            marks1 = mak1;
            marks2 = mak2;
        }
        void print()
        {
            cout << name << ", " << age << endl;
        }
        void hello()
        {
            cout << "Hello: " << name << endl;
        }
        int total()
        {
            return marks1 + marks2;
        }
};

int main()
{
    Person rudra("Rudra D Cruze", 24, 89, 90);
    rudra.print();
    rudra.hello();
    cout << rudra.total() << endl;
    return 0;
}