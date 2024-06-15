/*
    * Title: Problem 2
    * This program is about: Find the Missing Number
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>

int main()
{
    int test;
    scanf("%d", &test);

    for (int i = 0; i < test; i++)
    {
        long long m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        long long initialMul = (long long)a * b * c;

        if (initialMul == 0)
        {
            if (m == 0)
            {
                printf("0\n");
            }
            else
            {
                printf("-1\n");
            }
        }
        else if (m % initialMul == 0)
        {
            printf("%lld\n", m / initialMul);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}