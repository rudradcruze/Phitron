/*
    * Title: Problem G
    * This program is about: Conversion
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
#include <string.h>
int main()
{

    char str[100002];
    int temp = 0;
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        temp = (int)str[i];
        if (str[i] == ',')
        {
            printf(" ");
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
            printf("%c", temp - 32);
        else
            printf("%c", temp + 32);
    }
    printf("\n");

    return 0;
}