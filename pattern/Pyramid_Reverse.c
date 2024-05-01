/*
    * This program is about: Pyramid pattern printing
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        for (int j = n - i; j >= 1; j--)
        {
            printf(" ");
        }
        for (int k = i * 2 - 1; k >= 1; k--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}