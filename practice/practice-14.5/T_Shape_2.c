/*
    * Problem: T
    * This program is about: T Shape
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        for (int j = 1; j <= test - i; j++)
            printf(" ");

        for (int j = 1; j <= i * 2 - 1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}