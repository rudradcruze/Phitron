/*
    * Title: Problem A
    * This program is about: Add
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>

long long sum(long long a, long long b) {
    return a+b;
}
int main()
{

    long long a, b;
    scanf("%lld", &a);
    scanf("%lld", &b);
    printf("%lld", sum(a, b));

    return 0;
}
