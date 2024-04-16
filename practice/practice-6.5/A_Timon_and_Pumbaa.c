/*
    * Title: Problem A
    * This program is about: Timon and Pumbaa
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("%d\n", a - b);
    }
    else
    {
        printf("0\n");
    }

    return 0;
}