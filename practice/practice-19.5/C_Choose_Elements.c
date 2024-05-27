/*
    * Title: Problem C
    * This program is about: Choose Elements
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int n, k;
    scanf("%d %d", &n, &k);

    long long array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &array[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] < array[j])
            {
                long long temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    long long sum = 0;

    for (int i = 0; i < k; i++)
    {
        if (array[i] < 0)
            break;
        sum += array[i];
    }
    printf("%lld\n", sum);

    return 0;
}