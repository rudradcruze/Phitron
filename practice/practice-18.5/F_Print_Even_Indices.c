/*
    * Title: Problem F
    * This program is about: Print even indices of an array
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>

void printEvenIndices(int array[], int n, int i)
{
    if (i >= n)
        return;
    printEvenIndices(array, n, i + 2);
    printf("%d ", array[i]);
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
    printEvenIndices(array, test, 0);

    return 0;
}