/*
Author: Ashmit JaiSarita Gupta
Purpose: Matrix Multiplication
Date Created: 18-10-2021
*/
/*
Notes / Theory: 

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row1, column1, row2, column2, i, j, k, sum = 0;
    printf("Enter the number of Rows in first matrix...\n");
    scanf("%d", &row1);
    printf("Enter the number of Column in first matrix...\n");
    scanf("%d", &column1);
    printf("Enter the number of Rows in second matrix...\n");
    scanf("%d", &row2);
    printf("Enter the number of Column in second matrix...\n");
    scanf("%d", &column2);
    int matrix1[row1][column1], matrix2[row2][column2], matrix[row1][column2];
    if (column1 != row2)
    {
        printf("Sorry Matrix Multiplication is not possible! Retry with valid data.\n");
    }
    else
    {
        //Filling Of First Matrix
        printf("Enter the elements in First Matrix:\n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column1; j++)
            {
                // printf("Enter Element at [%d][%d] of Matrix 1: ", i + 1, j + 1);
                scanf("%d", &matrix1[i][j]);
            }
        }
        //Filling Of Second Matrix
        printf("Enter the elements in Second Matrix:\n");
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < column2; j++)
            {
                // printf("Enter Element at [%d][%d] of Matrix 2: ", i + 1, j + 1);
                scanf("%d", &matrix2[i][j]);
            }
        }
        //Calculation of Product Matrix: A X B = C : RC Method : Row X Column
        for (i = 0; i < row1; i++) //row2 == column1
        {
            for (j = 0; j < column2; j++) //column1 == row2
            {
                for (k = 0; k < row2; k++)
                {
                    sum += matrix1[i][k] + matrix2[k][j];
                }
                matrix[i][j] = sum;
                sum = 0;
            }
        }
        //Printing the Product Matrix
        printf("Product Matrix:\n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column2; j++)
            {
                printf("\t%d", matrix[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}