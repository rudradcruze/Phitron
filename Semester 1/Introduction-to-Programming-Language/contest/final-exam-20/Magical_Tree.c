/*
    * Title: Problem 4
    * This program is about: Magical Tree
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int numberOfStarts = 10 + n;
    int height = (numberOfStarts - 1) / 2;

    for (int i = 0; i <= height; i++)
    {
        int num_spaces = height - i - 1;
        int num_stars = 2 * i + 1;

        for (int j = 0; j <= num_spaces; j++)
            printf(" ");

        for (int k = 0; k < num_stars; k++)
            printf("*");

        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            printf(" ");

        for (int k = 0; k < n; k++)
            printf("*");

        printf("\n");
    }

    return 0;
}
