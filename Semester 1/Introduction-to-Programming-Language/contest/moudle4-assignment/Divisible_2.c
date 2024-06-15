/*
    * Title: Problem 4
    * This program is about: Simple program to print numbers that are divisible by 3 and 7.
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 21 && n <= 10000)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 && i % 7 == 0)
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}