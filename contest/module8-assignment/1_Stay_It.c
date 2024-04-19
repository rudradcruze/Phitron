/*
    * Assignment No: 2
    * Title: Problem 1
    * This program is about: Stay It
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
        for (int i = 0; i < test; i++)
        {
            printf("%d. I Want More Assignments\n", i + 1);
        }
    }

    return 0;
}