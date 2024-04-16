/*
    * Title: Problem C
    * This program is about: Next Alphabet
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    char c;
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z')
    {
        if (c == 'Z')
        {
            printf("A\n");
        }
        else
        {
            printf("%c\n", c + 1);
        }
    }
    else if (c >= 'a' && c <= 'z')
    {
        if (c == 'z')
        {
            printf("a\n");
        }
        else
        {
            printf("%c\n", c + 1);
        }
    }

    return 0;
}