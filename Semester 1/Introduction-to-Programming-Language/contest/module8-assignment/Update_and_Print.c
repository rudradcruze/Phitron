/*
    * Assignment No: 5
    * Title: Problem 5
    * This program is about: Update and Print
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int test, index, value;
    scanf("%d", &test);
    int number[test];
    for (int i = 0; i < test; i++)
    {
        scanf("%d", &number[i]);
    }
    scanf("%d %d", &index, &value);

    number[index] = value;
    while (test--)
    {
        printf("%d ", number[test]);
    }

    return 0;
}