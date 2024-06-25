/*
    Problem: 
    Title: namespace
    Author: Francis Rudra D Cruze
    Email: francisrudra@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

namespace rudra
{
    int age = 24;
    void hello()
    {
        cout << "Hello from Rudra namespace" << endl;
    }
    class R
    {
        public:
            int age2 = 24;
            void hello2()
            {
                cout << "Hello from R class in Rudra namespace" << endl;
            }
    };
}

namespace rudra2
{
    int age3 = 246;
    void hello3()
    {
        cout << "Hello from Rudra namespace" << endl;
    }
}
using namespace rudra;
using namespace rudra2;
int main()
{
    cout << age3 << endl;
    hello3();
    // cout << rudra::age << endl;
    // cout << rudra::R().age2 << endl;

    return 0;
}