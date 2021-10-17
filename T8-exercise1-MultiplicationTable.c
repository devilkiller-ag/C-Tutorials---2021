/*
Author: Ashmit JaiSarita Gupta
Purpose: Exercise 1: Multiplication Table

Print multiplication table of a number entered by the user in pretty form

Example:

Input
Enter the number you want multiplication table of:
6

Output:
Table of 6:
6 X 1 = 6
6 X 2 = 12
.
.
.
6 X 10 = 60

Date Created: 5-10-2021
*/
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number you want multiplication table of: \n"); 
    scanf("%d", &n);
    printf("Output: \n");
    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", n, i, n*i, "\n");
    }
    return 0;
}

