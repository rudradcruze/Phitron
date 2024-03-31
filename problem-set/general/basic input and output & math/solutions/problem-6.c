/*
    * Title: Problem 6
    * This program is about: Floating points
    Author:
    Author Email:
*/
#include <stdio.h>
int main()
{
    float a,b,c;

    printf("Number 1: ");
    scanf("%f", &a);
    printf("Number 2: ");
    scanf("%f", &b);
    printf("Number 3: ");
    scanf("%f", &c);

    printf("A = %.4f\nB = %.3f\nC = %.5f\nD = %.1f\n", a,b,c,a);

    return 0;
}