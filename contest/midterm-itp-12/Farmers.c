/*
    * Midterm Test
    * Title: Problem 3
    * This program is about: Farmers
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int test, person, additional, days;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        scanf("%d %d %d", &person, &additional, &days);
        int remaning = days - ((person * days) / (person + additional));
        printf("%d\n", remaning);
    }

    return 0;
}