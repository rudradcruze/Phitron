/*
    * Midterm Test
    * Title: Problem 3
    * This program is about: Tell Me
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int test, search, n;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        scanf("%d", &n);
        long long numbers[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &numbers[i]);
        }
        scanf("%d", &search);
        int found = 0;
        for (int j = 0; j < n; j++)
        {
            if (numbers[j] == search)
            {
                found = 1;
                break;
            }
        }
        if (found == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}