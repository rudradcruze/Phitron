/*
    * Title: Problem
    * This program is about:
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int findLength(char str[], int i)
{
    if (str[i] == '\0')
        return 0;
    return 1 + findLength(str, i + 1);
}
int main()
{

    char str[100] = "Hello";
    int length = findLength(str, 0);
    printf("%d", length);

    return 0;
}