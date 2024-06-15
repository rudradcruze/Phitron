/*
    * Title: Problem B
    * This program is about: Memo and Momo
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    long long a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);

    if (a % k == 0 && b % k == 0)
    {
        printf("Both\n");
    }
    else if (a % k == 0 && b % k != 0)
    {
        printf("Memo\n");
    }
    else if (a % k != 0 && b % k == 0)
    {
        printf("Momo\n");
    }
    else if (a % k != 0 && b % k != 0)
    {
        printf("No One\n");
    }

    return 0;
}