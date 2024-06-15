/*
    * Title: Problem G
    * This program is about: Max and Min
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include<stdio.h>
void maxMin(long long ar[],int n)
{
    long long max = ar[0], min = ar[0];
    for(int i=0;i<n;i++)
    {
        if (ar[i] < min)
            min = ar[i];

        if (ar[i] > max)
            max = ar[i];
    }
    printf("%lld %lld\n", min, max);
}
int main()
{   int n;
    scanf("%d", &n);
    long long ar[n];
    for(int i=0; i<n; i++) {
        scanf("%lld", &ar[i]);
    }
    maxMin(ar,n);
    return 0;
}
