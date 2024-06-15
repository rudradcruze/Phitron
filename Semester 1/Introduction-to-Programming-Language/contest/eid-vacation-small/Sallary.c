#include <stdio.h>

int main()
{

    long int x;
    scanf("%ld", &x);
    if (x >= 0)
        printf("%ld\n", x * 365);
    return 0;
}
