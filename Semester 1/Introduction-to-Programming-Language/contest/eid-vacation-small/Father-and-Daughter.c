#include <stdio.h>

int main()
{

    int x;
    scanf("%d", &x);
    if (x <= 10000)
    {
        for (int i = 1; i <= x / 4; i++)
        {
            if ((i * 4) + i == x)
            {
                printf("%d %d\n", (i * 4), i);
                break;
            }
        }
    }
    return 0;
}
