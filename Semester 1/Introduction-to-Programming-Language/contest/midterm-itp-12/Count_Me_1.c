/*
    * Midterm Test
    * Title: Problem 1
    * This program is about: Count Me 1
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int count2 = 0, count3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            count2++;
        }
        else if (numbers[i] % 3 == 0)
        {
            count3++;
        }
    }

    printf("%d %d", count2, count3);

    return 0;
}