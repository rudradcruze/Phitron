/*
    * Title: Problem B
    * This program is about: Print from 1 to N
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
void printFrom1ToN(int i, int n)
{
    if (i > n)
        return;
    printf("%d\n", i);
    printFrom1ToN(i + 1, n);
}
int main()
{

    int test;
    scanf("%d", &test);
    printFrom1ToN(1, test);

    return 0;
}