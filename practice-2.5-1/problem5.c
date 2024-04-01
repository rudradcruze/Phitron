/*
    * Title: Problem 5
    * This program is about: Budgeting
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);

    if (number >= 10000)
    {
        printf("Gucci Bag\n");
        if (number > 20000)
            printf("Gucci Belt\n");
    }
    else if (number >= 5000)
        printf("Levis Bag\n");
    else
        printf("Something\n");

    return 0;
}