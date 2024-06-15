/*
    * Title: Problem I
    * This program is about: Lucky Numbers
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int num;
    scanf("%d", &num);
    int single = num % 10;
    num = num / 10;

    if (single % num == 0 || num % single == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}