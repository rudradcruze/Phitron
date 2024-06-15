/*
    * Title: Problem M
    * This program is about: Replace Min Max
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int test, minIndex = 0, maxIndex = 0;
    scanf("%d", &test);
    int array[test];
    for (int i = 0; i < test; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 1; i < test; i++)
    {
        if (array[i] < array[minIndex])
        {
            minIndex = i;
        }
        if (array[i] > array[maxIndex])
        {
            maxIndex = i;
        }
    }

    int temp = array[minIndex];
    array[minIndex] = array[maxIndex];
    array[maxIndex] = temp;

    for (int i = 0; i < test; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}