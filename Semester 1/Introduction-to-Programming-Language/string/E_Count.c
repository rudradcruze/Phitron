/*
    * Title: Problem E
    * This program is about: Count
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
#include <string.h>
int main()
{

    char str[1000001];
    int count = 0;
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        count += (int)str[i] - '0';
    }

    printf("%d\n", count);

    return 0;
}