/*
    * Assignment 3
    * Title: Problem 1
    * This program is about: Pattern
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int n, i, j, counter = 1, k, s;
    scanf("%d", &n);

    s = n - 1;
    k = 1;

    for (i = 1; i < (n * 2); i++)
    {
        for (int j = 1; j <= s; j++)
            printf(" ");

        for (int j = 1; j <= k; j++)
        {
            if (counter % 2 == 0)
                printf("-");
            else
                printf("#");
        }

        if (i < n)
        {
            s--;
            k = k + 2;
        }
        else
        {
            s++;
            k = k - 2;
        }

        counter++;
        printf("\n");
    }

    return 0;
}