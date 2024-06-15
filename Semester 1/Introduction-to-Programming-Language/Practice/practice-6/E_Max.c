/*
    * Title: Problem
    * This program is about:
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int test, input, max = 0;
    scanf("%d", &test);
    while (test--)
    {
        scanf("%d", &input);
        if (input > max)
        {
            max = input;
        }
    }
    printf("%d\n", max);

    return 0;
}