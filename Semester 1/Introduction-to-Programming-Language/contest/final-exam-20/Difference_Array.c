#include <stdio.h>

// Sort function (Bubble Sort) to sort array in ascending order
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int p = 0; p < t; p++)
    {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }

        int b[n];
        for (int i = 0; i < n; ++i)
        {
            b[i] = a[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (b[j] > b[j + 1])
                {
                    int temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }

        int c[n];
        for (int i = 0; i < n; ++i)
        {
            c[i] = (a[i] > b[i]) ? (a[i] - b[i]) : (b[i] - a[i]);
        }

        for (int i = 0; i < n; ++i)
        {
            printf("%d ", c[i]);
        }
        printf("\n");
    }

    return 0;
}
