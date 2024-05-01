/*
    * This program is about: Selection Sort
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

    // Assending Order
    for (int i = 0; i < test - 1; i++)
    {
        for (int j = i + 1; j < test; j++)
        {
            if (array[i] > array[j])
            {
                array[i] = array[i] + array[j];
                array[j] = array[i] - array[j];
                array[i] = array[i] - array[j];
            }
        }
    }

    for (int i = 0; i < test; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Descending Order
    for (int i = 0; i < test - 1; i++)
    {
        for (int j = i + 1; j < test; j++)
        {
            if (array[i] < array[j])
            {
                array[i] = array[i] + array[j];
                array[j] = array[i] - array[j];
                array[i] = array[i] - array[j];
            }
        }
    }

    for (int i = 0; i < test; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}