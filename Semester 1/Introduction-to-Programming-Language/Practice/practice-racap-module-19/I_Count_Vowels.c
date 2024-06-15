/*
    * Title: Problem I
    * This program is about: Count Vowels
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>

int countVowels(char str[], int i)
{
    if (str[i] == '\0')
        return 0;

    int ans = countVowels(str, i + 1);

    if (str[i] >= 'A' && str[i] <= 'Z')
        str[i] += 32;

    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        return ans + 1;
    return ans;
}

int main()
{

    char str[205];
    fgets(str, 205, stdin);
    printf("%d", countVowels(str, 0));

    return 0;
}