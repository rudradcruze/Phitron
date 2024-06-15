/*
    * Title: Problem C
    * This program is about: Print from N to 1
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
void printFromNTo1(int i, int n)
{
    if (i > n)
        return;

    printFromNTo1(i + 1, n);
    if (i != n)
        printf(" ");
    printf("%d", i);
}
int main()
{

    int test;
    scanf("%d", &test);
    printFromNTo1(1, test);

    return 0;
}