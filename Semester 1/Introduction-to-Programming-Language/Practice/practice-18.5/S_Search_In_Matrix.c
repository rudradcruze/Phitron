/*
    * Title: Problem S
    * This program is about: Search in Matrix
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>
int main()
{

    int row, col;
    scanf("%d %d", &row, &col);
    int matrix[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int search;
    scanf("%d", &search);
    int flag = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == search)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("will not take number\n");
    }
    else
    {
        printf("will take number\n");
    }

    return 0;
}