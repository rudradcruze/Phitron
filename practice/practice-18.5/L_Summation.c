/*
    * Title: Problem L
    * This program is about: Summation
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>

int summation(int array[], int n, int i)
{
    if (i == n)
        return 0;

    return array[i] + summation(array, n, i + 1);
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
    printf("%d", summation(array, test, 0));

    return 0;
}