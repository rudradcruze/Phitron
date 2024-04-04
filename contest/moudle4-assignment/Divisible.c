/*
    * Title: Problem 3
    * This program is about: Simple program to check if a number is divisible by 3.
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{
    long long a;
    scanf("%lld", &a);
    if (a % 3 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}