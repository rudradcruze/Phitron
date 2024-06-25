/*
    Problem: 
    Title: this keyword
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
    
        Person(string name, int age)
        {
            (*this).name = name;
            this->age = age;
        }
};

int main()
{
    Person* rudra = new Person("Francis Rudra D Cruze", 24);
    Person* john = new Person("John Doe", 30);

    // rudra=john;
    // delete john;

    // rudra->name = john->name;
    // rudra->age = john->age;

    *rudra = *john;
    delete john;

    cout << rudra->name << " " << rudra->age << endl;



    return 0;
}