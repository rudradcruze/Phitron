/*
    * Title: Problem D
    * This program is about: Strings
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
#include <string.h>
int main()
{

    char strA[11], strB[11];
    scanf("%s", strA);
    scanf("%s", strB);

    printf("%d %d\n", strlen(strA), strlen(strB));
    printf("%s%s\n", strA, strB);

    char temp = strA[0];
    strA[0] = strB[0];
    strB[0] = temp;

    printf("%s %s\n", strA, strB);

    return 0;
}