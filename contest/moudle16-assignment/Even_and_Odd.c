/*
    * Assignment 3
    * Title: Problem 5
    * This program is about: Even and Odd
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>

void odd_even()
{

    int test;
    scanf("%d", &test);
    long long array[test];
    for (int i = 0; i < test; i++)
    {
        scanf("%lld", &array[i]);
    }

    int odd = 0, even = 0;
    for (int i = 0; i < test; i++)
    {
        if (array[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("%d %d\n", even, odd);
}

int main()
{

    odd_even();

    return 0;
}