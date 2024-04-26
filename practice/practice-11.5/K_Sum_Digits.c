/*
    * Title: Problem K
    * This program is about: Sum of Digits
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int n;
    char str[1000001];
    scanf("%d", &n);
    scanf("%s", str);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += str[i] - '0';
    }
    printf("%d", sum);

    return 0;
}