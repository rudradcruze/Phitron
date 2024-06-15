/*
    * Title: Problem J
    * This program is about: Count Letters
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    char c;
    int count[26] = {0};
    while (scanf("%c", &c) != EOF)
    {
        count[c - 97]++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        if (count[i - 97] > 0)
        {
            printf("%c : %d\n", i, count[i - 97]);
        }
    }

    return 0;
}