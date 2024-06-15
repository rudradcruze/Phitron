/*
    * This program is about: Copy elements of two arrays
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int a1, a2;

    scanf("%d", &a1);
    int array1[a1];
    for (int i = 0; i < a1; i++)
    {
        scanf("%d", &array1[i]);
    }

    scanf("%d", &a2);
    int array2[a2];
    for (int i = 0; i < a2; i++)
    {
        scanf("%d", &array2[i]);
    }

    int array3[a1 + a2], i = 0;
    int totalSize = a1 + a2;

    for (i = 0; i < a1; i++)
    {
        array3[i] = array1[i];
    }

    for (int k = 0; k < a2; k++)
    {
        array3[i] = array2[k];
        i++;
    }

    for (i = 0; i < totalSize; i++)
    {
        printf("%d ", array3[i]);
    }

    return 0;
}