/*
    * Title: Problem D
    * This program is about: Ali Baba and Puzzles
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int num1, num2, num3, num4;
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 + num2 - num3 == num4 || num1 + num2 * num3 == num4 || num1 - num2 + num3 == num4 || num1 - num2 * num3 == num4 || num1 * num2 - num3 == num4 || num1 * num2 + num3 == num4)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}