/*
    * Title: Problem C
    * This program is about: Compare
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
#include <string.h>
int main()
{

    char str1[21], str2[21];
    scanf("%s %s", str1, str2);
    int compare = strcmp(str1, str2);

    if (compare < 0)
        printf("%s", str1);
    else if (compare > 0)
        printf("%s", str2);
    else
        printf("%s", str1);

    return 0;
}