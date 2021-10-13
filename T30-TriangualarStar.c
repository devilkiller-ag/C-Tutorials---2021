/*
Author: Ashmit JaiSarita Gupta
Purpose: To print Triangular or reversed triangual star pattern based on user input 0 or 1 respectively.
Date Created: 06-10-2021
*/
#include <stdio.h>
int main()
{
    int opt, i, j;
    start:
    printf("Press 0 for Triangular Star Pattern.\nPress 1 for Reverse Triangular Star Pattern.\nEnter Your Choice...\n");
    scanf("%d", &opt);
    switch (opt)
    {
    case 0:
        for(i = 0; i <= 4; i++)
        {
            for(j = 0; j < i; j++)
            {
                printf(" * ");
            }
            printf("\n");
        }
        break;

    case 1:
        for(i = 4; i > 0; i--)
        {
            for(j = 0; j < i; j++)
            {
                printf(" * ");
            }
            printf("\n");
        }
        break;

    default:
        printf("Please Re-Select Valid Choice...\n");
        goto start;
        break;
    }
    return 0;
}