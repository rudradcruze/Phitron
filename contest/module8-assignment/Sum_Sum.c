/*
    * Assignment No: 4
    * Title: Problem 4
    * This program is about: Sum Sum
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int test, sumPositive = 0, sumNegative = 0, number;
    scanf("%d", &test);
    if (test >= 1 && test <= 100000)
    {
        while (test--)
        {
            scanf("%d", &number);
            if (number >= -1000 && number <= 1000)
            {
                if (number > 0)
                {
                    sumPositive += number;
                }
                else
                {
                    sumNegative += (-number);
                }
            }
        }
    }

    printf("%d %d\n", sumPositive, -sumNegative);

    return 0;
}