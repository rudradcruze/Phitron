/*
    * Title: Problem E
    * This program is about: Lowest Number
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int test, index = 0, lowest;
    scanf("%d", &test);
    int number[test];
    for (int i = 0; i < test; i++)
    {
        scanf("%d", &number[i]);
    }

    lowest = number[0];
    for (int i = 1; i < test; i++)
    {
        if (number[i] < lowest)
        {
            lowest = number[i];
            index = i;
        }
    }

    printf("%d %d", lowest, index + 1);

    return 0;
}