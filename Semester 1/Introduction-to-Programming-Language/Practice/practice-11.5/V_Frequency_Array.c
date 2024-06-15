/*
    * Title: Problem V
    * This program is about: Frequency Array
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int n, m;
    scanf("%d %d", &n, &m);
    int numbers[n];
    int count[m + 1];
    for (int i = 0; i <= m; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < n; i++)
    {
        count[numbers[i]]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}