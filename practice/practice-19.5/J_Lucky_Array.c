/*
    * Title: Problem J
    * This program is about: Lucky Array
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int test;
    scanf("%d", &test);
    int array[test];
    for (int i = 0; i < test; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < test - 1; i++)
    {
        for (int j = i + 1; j < test; j++)
        {
            if (array[i] > array[j])
            {
                long long temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    int count = 1;
    int min = array[0];

    for (int i = 1; i < test; i++)
    {
        if (array[i] == min)
        {
            count++;
        }
    }

    if (count % 2 != 0)
        printf("Lucky\n");
    else
        printf("Unlucky\n");

    return 0;
}