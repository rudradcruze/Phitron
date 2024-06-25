/*
    Problem:
    Title: Modifiers 1
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    string s1 = "hello";
    string s2 = "world";

    // string s3 = s1 + ' ' + s2;
    // s1.append(s2);
    // cout << s1 << endl;
    // cout << s3 << endl;

    // s1[5] = 'A'; // Error
    // s1.push_back('A');
    // s1.insert(5, "A");
    // cout << s1 << endl;
    // // s1+='A';
    // s1.pop_back();
    // cout << s1 << endl;

    // s1 = "Melo";
    // s1.assign("Melo");
    // cout << s1 << endl;


    string a = "HelloWorld";
    // a.erase(4);
    // a.erase(3, 3);

    cout << a << endl;
    a.insert(5, "_Rudra_");
    // a.replace(3, 3, "=");
    cout << a << endl;

    return 0;
}