/*
    * Title: Problem D
    * This program is about: Print Digits using Recursion
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>

void printDigits(long long n)
{
    if (n == 0)
        return;

    printDigits(n / 10);
    printf("%d ", n % 10);
}

int main()
{

    int test;
    scanf("%d", &test);
    long long number;
    for (int i = 0; i < test; i++)
    {
        scanf("%lld", &number);
        printDigits(number);
        if (number == 0)
            printf("0");
        printf("\n");
    }

    return 0;
}