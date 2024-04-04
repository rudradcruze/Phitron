/*
    * Title: Problem 1180 - Lowest Number and Position
    * This program is about: Given an array of integers, this program finds the lowest number and its position in the array.
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int min = array[0];
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
            index = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", min, index);
    return 0;
}