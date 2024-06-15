/*
    * Title: Problem Q
    * This program is about: Digits
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int n, input;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &input);
        do
        {
            printf("%d ", input % 10);
            input = input / 10;
        } while (input > 0);
        printf("\n");
    }

    return 0;
}