/*
    * Assignment No: 3
    * Title: Problem 3
    * This program is about: Reverse and Odd
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int test;
    scanf("%d", &test);
    if (test >= 1 && test <= 100000)
    {
        int number[test];
        for (int i = 0; i < test; i++)
        {
            scanf("%d", &number[i]);
        }

        while (test--)
        {
            if (test % 2 != 0)
            {
                printf("%d ", number[test]);
            }
        }
    }

    return 0;
}