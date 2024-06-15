/*
    * Title: Problem W
    * This program is about: Shape_3
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int n, s, k;
    scanf("%d", &n);
    s = n - 1;
    k = 1;
    for (int i = 1; i <= n * 2; i++)
    {
        for (int j = 1; j <= s; j++)
            printf(" ");

        for (int j = 1; j <= k; j++)
            printf("*");

        printf("\n");
        if (i < n)
        {
            s--;
            k += 2;
        }
        else if (i == n)
        {
            s = 0;
            k = n * 2 - 1;
        }
        else
        {
            s++;
            k -= 2;
        }
    }

    return 0;
}