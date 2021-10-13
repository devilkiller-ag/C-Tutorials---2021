/*
Author: Ashmit JaiSarita Gupta
Purpose: EmployeeManagerExercise
Dynamic Memory Allocation
    ABC Pvt Ltd. manages employee records of other companies.
    Employee Id can be of any length and it can contain any character
    For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
    Then, you have to take employee id as an input and display it on screen. 
    Store the employee id in a character array which is allocated dynamically.
    You have to create only one character array dynamically
EXAMPLE:
    Employee 1:
    Enter no of characters in your eId
    45
    Dynamically allocate the character array.
    take input from user 

    Employee 2:
    Enter no of characters in your eId
    4
    Dynamically allocate the character array.
    take input from user 

    Employee 3:
    Enter no of characters in your eId
    9
    Dynamically allocate the character array.
    take input from user 
Date Created: 
*/
#include <stdio.h>
#include <stdlib.h>

void getArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the  character %d of employee id: \n", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf(arr[i]);
    }
}

void main()
{
    int *eid, i, n, len;
    printf("Enter the number of employees you want to enter details of: \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the number of characters in your employee id of employee %d: \n", i + 1);
        scanf("%d", &len);
        eid = (int *)malloc(len * sizeof(int));
        getArray(eid, len);
        // printf("The  employee id of employee %d: \n", i + 1);
        // printArray(eid, len);
    }
}