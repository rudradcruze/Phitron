#include <stdio.h>

int main()
{

    int n, start;
    scanf("%d", &n);

    if (n % 5 == 0)
        start = n / 5 - 4;
    else
        start = n / 5 - 5;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", start);
        start += 2;
    }
    printf("\n");

    return 0;
}
