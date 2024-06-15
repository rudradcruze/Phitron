/*
    * Title: Problem A
    * This program is about: Summation
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    long long A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }

    long long absolute_sum = 0;

    for (int i = 0; i < N; i++)
    {
        absolute_sum += A[i];
    }

    printf("%lld\n", absolute_sum < 0 ? -absolute_sum : absolute_sum);

    return 0;
}