/*
    * Title: Problem c
    * This program is about: Even, Odd, Positive and Negative Numbers
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int n, even = 0, odd = 0, positive = 0, negative = 0, num;
    scanf("%d", &n);

    if (n >= 1 && n <= 1000)
    {
        while (n--)
        {
            scanf("%d", &num);
            if (num % 2 == 0)
                even++;
            else
                odd++;

            if (num > 0)
                positive++;
            else if (num < 0)
                negative++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, positive, negative);

    return 0;
}