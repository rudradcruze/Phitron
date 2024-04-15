/*
    * Title: Problem D
    * This program is about: Fixed Password
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int password = 1999, input;
    while (1)
    {
        scanf("%d", &input);
        if (input == password)
        {
            printf("Correct\n");
            break;
        }
        else
            printf("Wrong\n");
    }

    return 0;
}