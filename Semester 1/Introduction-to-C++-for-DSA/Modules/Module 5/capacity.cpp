/*
    Problem:
    Title: Capacity
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    // string s1 = "hello world";
    // string s = "asdjglhajklshdgjklha";
    // cout << s1.size() << endl;
    // cout << s1.max_size() << endl;
    // cout << s.capacity() << endl;
    // s = "hjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj";
    // cout << s.capacity() << endl;
    // cout << s.size() << endl;
    // s1.clear();
    // cout << s1.size() << endl;
    // // cout << s1 << endl;


    // string s;
    // if (s.empty()) cout << "Empty" << endl;
    // else cout << "Not Empty" << endl;

    string s;
    cin >> s;
    // s.resize(5);
    // s.resize(20, 'x');
    // cout << s.size() << endl;
    // cout << s << endl;

    s.resize(5);
    cout << s << endl;
    s.resize(11, 'x');
    cout << s << endl;

    return 0;
}