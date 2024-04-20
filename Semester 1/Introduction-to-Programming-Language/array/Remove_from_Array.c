/*
    * This program is about: Remove from an array
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int array[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int position;
    scanf("%d", &position);

    for (int i = position - 1; i < n - 1; i++)
    {
        array[i] = array[i + 1];
    }

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}