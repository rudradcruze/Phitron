/*
    * Title: Problem 9
    * This program is about: area of the triangle
    Author:
    Author Email:
*/
#include <stdio.h>
    int
    main()
{
    float base, height;

    printf("Base: ");
    scanf("%f", &base);
    printf("Height: ");
    scanf("%f", &height);

    printf("Area of Triangle: %.2f", 0.5*base*height);

    return 0;
}