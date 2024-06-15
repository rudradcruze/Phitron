/*
    * Title: Problem F
    * This program is about: Multiplication Table
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    if (n >= 1 && n <= 50)
    {
        for (int i = 1; i <= 12; i++)
        {
            printf("%d * %d = %d\n", n, i, n * i);
        }
    }

    return 0;
}