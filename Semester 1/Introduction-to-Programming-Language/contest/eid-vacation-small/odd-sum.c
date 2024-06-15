#include <stdio.h>

int main()
{

    int n, start;
    scanf("%d", &n);

    if (n % 4 == 0)
        start = n / 4 - 3;
    else
        start = n / 4 - 4;

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", start);
        start += 2;
    }
    printf("\n");

    return 0;
}
