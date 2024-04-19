/*
    * Title: Problem D
    * This program is about: Positions in array
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int test;
    scanf("%d", &test);
    int number[test];
    for (int i = 0; i < test; i++)
    {
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < test; i++)
    {
        if (number[i] <= 10)
        {
            printf("A[%d] = %d\n", i, number[i]);
        }
    }

    return 0;
}