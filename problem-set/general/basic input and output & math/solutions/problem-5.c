/*
    * Title: Problem 5
    * This program is about: Date formate
    Author:
    Author Email:
*/
#include <stdio.h>
int main()
{

    char date[10];
    
    scanf("%[^\n]%*c", date);

    printf("%c%c-%c%c-%c%c%c%c\n", date[3], date[4], date[0], date[1], date[6], date[7], date[8], date[9]);
    printf("%c%c-%c%c-%c%c\n", date[8], date[9], date[0], date[1], date[3], date[4]);
    printf("%c%c-%c%c-%c%c\n", date[0], date[1], date[8], date[9], date[3], date[7]);

    return 0;
}