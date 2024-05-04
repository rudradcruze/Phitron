/*
    * Assignment 3
    * Title: Problem 4
    * This program is about: Is Palindrome
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
    int falg = 0, j = strlen(str) - 1;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != str[j])
        {
            falg = 1;
            break;
        }
        j--;
    }
    return falg == 0 ? 1 : 0;
}

int main()
{

    char str[1001];
    scanf("%s", str);

    int result = is_palindrome(str);

    if (result == 1)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}