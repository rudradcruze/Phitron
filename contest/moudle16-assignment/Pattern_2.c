/*
    * Assignment 3
    * Title: Problem 2
    * This program is about: Pattern 2
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int n, s, k;
    scanf("%d", &n);

    s = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
            printf(" ");

        for (int j = i; j >= 1; j--)
            printf("%d", j);

        printf("\n");
        s--;
    }

    return 0;
}