/*
    * Title: Problem 3
    * This program is about: Character order print
    Author:
    Author Email:
*/
#include <stdio.h>
int main()
{
    char a, b, c;
    scanf("%c %c %c", &a, &b, &c);

    // Answer 1
    printf("A = %c, B = %c, C = %c\n", a, b, c);
    printf("A = %c, B = %c, C = %c\n", b, c, a);
    printf("A = %c, B = %c, C = %c\n", c, a, b);

    // Answer 2
    printf("A = %c, B = %c, C = %c\nA = %c, B = %c, C = %c\nA = %c, B = %c, C = %c\n", a, b, c, b, c, a, c, a, b);

    return 0;
}