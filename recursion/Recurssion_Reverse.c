/*
    * Title: Problem
    * This program is about:
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
void printReverse(int i)
{
    if (i == 6)
        return;

    printReverse(i + 1);
    printf("%d ", i);
}
int main()
{
    printReverse(1);
    return 0;
}