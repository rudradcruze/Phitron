/*
    * Midterm Test
    * Title: Problem 3
    * This program is about: Count Me 3
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
#include <string.h>
int main()
{

    int test, capital = 0, small = 0, digit = 0;
    scanf("%d", &test);
    char str[10001];

    for (int i = 0; i < test; i++)
    {
        scanf("%s", str);
        for (int j = 0; j < strlen(str); j++)
        {
            if (str[j] >= 'A' && str[j] <= 'Z')
            {
                capital++;
            }
            else if (str[j] >= 'a' && str[j] <= 'z')
            {
                small++;
            }
            else if (str[j] >= '0' && str[j] <= '9')
            {
                digit++;
            }
        }
        printf("%d %d %d\n", capital, small, digit);
        capital = 0;
        small = 0;
        digit = 0;
    }

    return 0;
}