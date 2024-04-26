/*
    * Midterm Test
    * Title: Problem 4
    * This program is about: Count Me 4
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
#include <string.h>
int main()
{

    char str[10001];
    scanf("%s", str);

    int count[26] = {0};
    for (int i = 0; i < strlen(str); i++)
    {
        count[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("%c - %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}