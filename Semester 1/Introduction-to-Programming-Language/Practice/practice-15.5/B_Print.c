/*
    * Title: Problem B
    * This program is about: Print
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>

void print(int n) {
    for(int i=1; i<n; i++)
        printf("%d ", i);
    printf("%d\n", n);
}

int main()
{
    int a;
    scanf("%d", &a);
    print(a);

    return 0;
}
