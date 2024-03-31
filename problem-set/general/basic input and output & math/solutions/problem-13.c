/*
    * Title: Problem 13
    * This program is about: the area of the cylinder
    Author:
    Author Email:
*/
#include <stdio.h>
int main()
{

    int employeeId;
    float workingHorus, salary;

    printf("Employees ID: ");
    scanf("%d", &employeeId);
    printf("Working hrs: ");
    scanf("%f", &workingHorus);
    printf("Salary: ");
    scanf("%f", &salary);

    printf("Employees ID = %d", employeeId);
    printf("Salary = %.2f", workingHorus * salary);

    return 0;
}