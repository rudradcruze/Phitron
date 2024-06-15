/*
    * Title: Problem 4
    * This program is about: positive, negetive or zero
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);

    if (number > 0)
        printf("positive");
    else if (number == 0)
        printf("zero");
    else
        printf("negative");

    return 0;
}