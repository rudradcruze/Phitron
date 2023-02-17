/*
    * Title: Problem 8
    * This program is about: basic math (A * B - C * D)
    Author:
    Author Email:
*/
#include <stdio.h>
int main()
{

    int num1, num2, num3, num4;

    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);
    printf("Number 3: ");
    scanf("%d", &num3);
    printf("Number 4: ");
    scanf("%d", &num4);

    printf("Result is: %d\n", (num1 * num2 - num3 * num4));

    return 0;
}