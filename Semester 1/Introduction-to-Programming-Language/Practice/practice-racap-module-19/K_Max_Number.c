/*
    * Title: Problem K
    * This program is about: Find the maximum number from an array
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
#include <limits.h>

long long maxNumber(long long array[], int size, int i)
{
    if (i == size)
        return INT_MIN;

    long long max = maxNumber(array, size, i + 1);

    if (array[i] > max)
        return array[i];
    else
        return max;
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
    printf("%lld", maxNumber(array, test, 0));

    return 0;
}