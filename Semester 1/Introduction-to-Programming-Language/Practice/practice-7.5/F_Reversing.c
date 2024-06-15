/*
    * Title: Problem F
    * This program is about: Reversing
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

    while (test--)
    {
        printf("%d ", number[test]);
    }

    return 0;
}