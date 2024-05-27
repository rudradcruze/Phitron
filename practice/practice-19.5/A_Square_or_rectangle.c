/*
    * Title: Problem A
    * This program is about: Square or rectangle
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int test;
    scanf("%d", &test);
    long long a, b;
    for (int i = 0; i < test; i++)
    {
        scanf("%lld %lld", &a, &b);
        if (a == b)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }

    return 0;
}