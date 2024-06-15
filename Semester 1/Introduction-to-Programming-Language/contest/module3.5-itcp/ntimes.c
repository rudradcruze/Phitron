#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    if (n >= 1 && n <= 1000)
    {
        while (n >= 1)
        {
            printf("I Love Practice\n");
            n--;
        }
    }
    return 0;
}
