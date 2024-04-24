/*
    * Title: Problem B
    * This program is about: Let's use Getline
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    char str[1000001];
    fgets(str, 1000001, stdin);

    for (int i = 0; str[i] != '\\'; i++)
        printf("%c", str[i]);

    return 0;
}