#include <stdio.h>

int main()
{

    int x, r;
    scanf("%d %d", &x, &r);
    int indivisualTaka = (x - r) / 2;

    printf("%d %d\n", indivisualTaka + r, indivisualTaka);

    return 0;
}
