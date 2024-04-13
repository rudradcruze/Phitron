#include <stdio.h>

int main()
{

    long int n, sum = 0;
    scanf("%ld", &n);
    for (long int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%ld\n", sum);
    return 0;
}