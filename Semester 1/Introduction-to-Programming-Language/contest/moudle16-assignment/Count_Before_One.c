/*
    * Assignment 3
    * Title: Problem 3
    * This program is about: Count Before One
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>

int count_before_one(int array[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == 1)
            break;
        count++;
    }

    return count;
}

int main()
{

    int test;
    scanf("%d", &test);
    int array[test];
    for (int i = 0; i < test; i++)
    {
        scanf("%d", &array[i]);
    }

    int result = count_before_one(array, test);
    printf("%d\n", result);

    return 0;
}