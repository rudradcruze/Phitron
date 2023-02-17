/*
    * Title: Problem 10
    * This program is about: area of the rectangular
    Author:
    Author Email:
*/
#include <stdio.h>
    int
    main()
{
    float length, width;

    printf("length: ");
    scanf("%f", &length);
    printf("width: ");
    scanf("%f", &width);

    printf("Area of rectangular: %.2f", length * width);

    return 0;
}