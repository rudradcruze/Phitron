/*
    * Title: Problem C
    * This program is about: Replacement
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int test;
    scanf("%d", &test);
    int number[test];
    for (int i = 0; i < test; i++)
    {
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < test; i++)
    {
        if (number[i] > 0)
        {
            number[i] = 1;
        }
        else if (number[i] < 0)
        {
            number[i] = 2;
        }
        else
        {
            number[i] = 0;
        }
    }

    for (int i = 0; i < test; i++)
    {
        printf("%d ", number[i]);
    }

    return 0;
}