/*
    * Title: Problem F
    * This program is about: Way Too Long Words
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
#include <string.h>
int main()
{

    int test;
    char str[102];
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        scanf("%s", str);
        int length = strlen(str);
        if (length > 10)
        {
            printf("%c%d%c\n", str[0], length - 2, str[length - 1]);
        }
        else
        {
            printf("%s\n", str);
        }
    }

    return 0;
}