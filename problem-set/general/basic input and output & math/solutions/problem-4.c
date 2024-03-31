/*
    * Title: Problem 5
    * This program is about: take student info and print it
    Author:
    Author Email:
*/
#include <stdio.h>
int main()
{

    char name[100], university[100], faculty[100], department[100];

    printf("Name: ");
    scanf("%[^\n]%*c", name);
    printf("University: ");
    scanf("%[^\n]%*c", university);
    printf("Faculty: ");
    scanf("%[^\n]%*c", faculty);
    printf("Department: ");
    scanf("%[^\n]%*c", department);

    printf("\nStudent Name: %s\n", name);
    printf("University Name: %s\n", university);
    printf("Faculty Name: %s\n", faculty);
    printf("Department Name: %s\n", department);

    return 0;
}