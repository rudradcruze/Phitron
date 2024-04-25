/*
    * Title: Problem I
    * This program is about: Palindrome
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
#include <string.h>
int main()
{

    char str[1001];
    scanf("%s", str);
    int length = strlen(str);
    int end = length - 1;
    int flag = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] != str[end])
        {
            flag = 1;
            break;
        }
        end--;
    }

    if (flag == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}