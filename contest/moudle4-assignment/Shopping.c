/*
    * Title: Problem 5
    * This program is about: Simple program to check if a person can buy Punjabi and shoes.
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{
    double n;
    scanf("%lf", &n);
    if (n > 1000)
    {
        printf("I will buy Punjabi\n");
        n -= 1000;
        if (n >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else
    {
        printf("Bad luck!\n");
    }
    return 0;
}