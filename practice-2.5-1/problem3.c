/*
    * Title: Problem 3
    * This program is about: Even Odd
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);

    if (number >= 0)
    {
        if (number % 2 == 0)
            printf("even");
        else
            printf("odd");
    }

    return 0;
}