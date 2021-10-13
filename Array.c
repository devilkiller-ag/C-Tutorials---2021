/*
Author: Ashmit JaiSarita Gupta
Date Created: 06-10-2021
*/
#include <stdio.h>
int main()
{
    // printf("");
    int marks[4] = {12, 34, 54, 67};
    // marks[0] = 34;
    // printf("Marks of student 1 is %d.\n", marks[0]);
    // marks[1] = 21;
    // marks[2] = 22;
    // marks[3] = 23;
    // printf("Marks of student 1 is %d.\n", marks[0]);

    int marky[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};

    int i, j;
    // for (i = 0; i < 2; i++)
    // {
    //     for (j = 0; j < 4; j++)
    //     {
    //         printf("Enter the value of element (%d, %d): \n", i + 1, j + 1);
    //         scanf("%d", &marky[i][j]);
    //     }
    // }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            // printf("The value of element (%d, %d) is %d \n", i + 1, j + 1, marky[i][j]);
            printf(" %d ", marky[i][j]);
        }
        printf("\n");
    }

    return 0;
}