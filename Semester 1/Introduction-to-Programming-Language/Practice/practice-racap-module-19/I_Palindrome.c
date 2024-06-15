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

    char str1[1001], str2[1001];
    scanf("%s", str1);
    strcpy(str2, str1);
    int i = 0, j = strlen(str2) - 1;

    while (i < j)
    {
        char temp = str2[i];
        str2[i] = str2[j];
        str2[j] = temp;
        i++;
        j--;
    }

    if (strcmp(str1, str2) == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}