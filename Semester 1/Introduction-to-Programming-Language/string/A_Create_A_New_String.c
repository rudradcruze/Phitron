/*
    * Title: Problem A
    * This program is about: Create a new String
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
#include <string.h>
int main()
{

    char str1[1001], str2[1001];
    scanf("%s %s", str1, str2);

    printf("%d %d\n", strlen(str1), strlen(str2));
    printf("%s %s\n", str1, str2);

    return 0;
}
