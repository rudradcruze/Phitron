/*
    * Title: Problem 11
    * This program is about: perimeter of the rectangular
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

    printf("Perimeter of rectangular: %.2f", 2 * (length + width));

    return 0;
}