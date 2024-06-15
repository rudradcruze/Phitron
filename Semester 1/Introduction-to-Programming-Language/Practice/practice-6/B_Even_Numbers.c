/*
    * Title: Problem B
    * This program is about: Even Numbers
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int n, counter = 0;
    scanf("%d", &n);

    if (n >= 1 && n <= 1000)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
                counter++;
            }
        }
    }

    if (counter == 0)
    {
        printf("-1");
    }

    return 0;
}