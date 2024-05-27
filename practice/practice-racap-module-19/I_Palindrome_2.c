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

    char str1[1001];
    scanf("%s", str1);
    int i = 0, j = strlen(str1) - 1, flag = 1;

    while (i < j)
    {
        if (str1[i] != str1[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}