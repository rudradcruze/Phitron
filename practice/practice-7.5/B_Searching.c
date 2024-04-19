/*
    * Title: Problem B
    * This program is about: Searching
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int test, index = -1;
    scanf("%d", &test);
    long long number[test], search;
    for (int i = 0; i < test; i++)
    {
        scanf("%lld", &number[i]);
    }

    scanf("%lld", &search);

    for (int i = 0; i < test; i++)
    {
        if (search == number[i])
        {
            index = i;
            break;
        }
    }

    printf("%d\n", index);

    return 0;
}