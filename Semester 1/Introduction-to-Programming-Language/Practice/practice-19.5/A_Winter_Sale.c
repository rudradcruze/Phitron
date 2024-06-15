/*
    * Title: Problem A
    * This program is about: Winter Sale
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    float x, p;
    scanf("%f %f", &x, &p);

    float price = p / ((100 - x) / 100);
    printf("%.2f\n", price);

    return 0;
}