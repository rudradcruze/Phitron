/*
    * Title: Problem T
    * This program is about: Sort Numbers
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include<stdio.h>
void sort(long long ar[], int n)
{
    long long temp;

    for(int i=0; i < n; i++)
    {
        for(int j=i+1; j < n; j++)
        {
            if(ar[i]>ar[j])
            {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
}

void print(long long ar[], int n)
{
    for(int i=0; i<n; i++) {
        printf("%lld\n", ar[i]);
    }
}

int main()
{
    long long ar[3], ar2[3];

    for (int i=0; i < 3; i++) {
        scanf("%lld", &ar[i]);
    }

    for(int i=0; i<3; i++) {
        ar2[i]=ar[i];
    }

    sort(ar,3);
    print(ar, 3);
    printf("\n");
    print(ar2, 3);

    return 0;
}
