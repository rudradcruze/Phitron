#include <stdio.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int i = 0;
    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("A is equal to B\n");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("A is smaller than B\n");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("A is greater than B\n");
            break;
        }

        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] > b[i])
        {
            printf("A is greater than B\n");
            break;
        }
        else
        {
            printf("A is smaller than B\n");
            break;
        }
    }
    return 0;
}