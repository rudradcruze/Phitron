/*
    * Assignment No: 2
    * Title: Problem 2
    * This program is about: Is It a Challenge
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int test;
    scanf("%d", &test);
    if (test >= -100000 && test <= 100000)
    {
        if (test > 0)
        {
            for (int i = 1; i <= test; i++)
            {
                printf("%d ", i);
            }
        }
        else
        {
            while (test <= 0)
            {
                printf("%d ", test);
                test++;
            }
        }
    }

    return 0;
}