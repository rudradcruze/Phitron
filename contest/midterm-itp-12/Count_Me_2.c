/*
    * Midterm Test
    * Title: Problem 2
    * This program is about: Count Me 2
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
#include <string.h>
int main()
{

    char str[100001];
    scanf("%s", str);
    int count = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}