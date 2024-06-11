/*
    * Title: Problem 1
    * This program is about: Tiger vs Pathan
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int test;
    scanf("%d", &test);
    char str[100001];
    int len, countT = 0;
    for (int i = 0; i < test; i++)
    {
        scanf("%d", &len);
        scanf("%s", str);
        for (int j = 0; j < len; j++)
        {
            if (str[j] == 'T')
            {
                countT++;
            }
        }
        printf(countT > len - countT ? "Tiger\n" : countT == len - countT ? "Draw\n"
                                                                          : "Pathaan\n");
        countT = 0;
    }

    return 0;
}