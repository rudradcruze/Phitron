/*
    * Title: Problem T
    * This program is about: Matrix
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>

int main()
{

    long long test;
    scanf("%lld", &test);
    long long array[test][test];
    for (int i = 0; i < test; i++)
    {
        for (int j = 0; j < test; j++)
        {
            scanf("%lld", &array[i][j]);
        }
    }

    long long sumMain = 0, sumSecondary = 0;

    for (int i = 0; i < test; i++)
    {
        for (int j = 0; j < test; j++)
        {
            if (i + j == test - 1)
                sumSecondary += array[i][j];

            if (i == j)
                sumMain += array[i][j];
        }
    }

    long long sum = sumMain - sumSecondary;

    printf("%lld\n", sum < 0 ? sum * -1 : sum);

    return 0;
}