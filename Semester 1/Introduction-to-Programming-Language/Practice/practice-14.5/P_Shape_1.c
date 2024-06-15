/*
    * Problem: P
    * This program is about: P Shape
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int test;
    scanf("%d", &test);
    while (test != 0)
    {
        for (int i = 1; i <= test; i++)
        {
            printf("*");
        }
        printf("\n");
        test--;
    }

    return 0;
}