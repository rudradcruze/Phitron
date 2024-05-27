/*
    * Title: Problem L
    * This program is about: Summation
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>

long long summation(long long array[], int n, int i)
{
    if (i == n)
        return 0;

    return array[i] + summation(array, n, i + 1);
}

int main()
{

    int test;
    scanf("%d", &test);
    long long array[test];
    for (int i = 0; i < test; i++)
    {
        scanf("%lld", &array[i]);
    }
    printf("%lld", summation(array, test, 0));

    return 0;
}