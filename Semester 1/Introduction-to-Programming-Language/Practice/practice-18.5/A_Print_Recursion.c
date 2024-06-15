/*
    * Title: Problem A
    * This program is about: Print I love Recursion n times
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
void printRecurssion(int i, int size)
{
    if (i == size)
        return;
    printf("I love Recursion\n");
    printRecurssion(i + 1, size);
}
int main()
{

    int test;
    scanf("%d", &test);
    printRecurssion(0, test);

    return 0;
}