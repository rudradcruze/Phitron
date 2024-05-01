/*
    * This program is about: Sum of two values
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int test, sum, flag = 0;
    scanf("%d", &test);
    int array[test];
    for (int i = 0; i < test; i++)
    {
        scanf("%d", &array[i]);
    }
    scanf("%d", &sum);
    for (int i = 0; i < test - 1; i++)
    {
        for (int j = i + 1; j < test; j++)
        {
            if (array[i] + array[j] == sum)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}