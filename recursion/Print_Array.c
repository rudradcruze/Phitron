/*
    * Title: Problem
    * This program is about:
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>

void printArray(int array[], int n, int i)
{
    if (i == n)
        return;
    printf("%d ", array[i]);
    printArray(array, n, i + 1);
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
    printArray(array, test, 0);

    return 0;
}