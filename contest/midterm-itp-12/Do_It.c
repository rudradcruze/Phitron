/*
    * Midterm Test
    * Title: Problem 4
    * This program is about: Do It
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int test, from;
    scanf("%d %d", &test, &from);
    for (int i = 0; i < test; i++)
    {
        for (int j = 1; j <= from; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}