/*
    * Title: Problem 12
    * This program is about: the area of the cylinder
    Author: 
    Author Email: 
*/
#include <stdio.h>
    int
    main()
{
    float radius, height;

    printf("radius: ");
    scanf("%f", &radius);
    printf("height: ");
    scanf("%f", &height);

    printf("Area of the cylinder: %.2f", (2 * 3.14159 * radius * height) + (2 * 3.14159 * (radius * radius)));

    return 0;
}