/*
    * This program is about: Patter printing
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