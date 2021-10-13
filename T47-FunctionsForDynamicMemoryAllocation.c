/*
Author: Ashmit JaiSarita Gupta
Purpose: Functions For Dynamic Memory Allocation: Malloc, Calloc, Realloc, free()
Date Created: 11-10-2021
*/
#include <stdio.h>
#include <stdlib.h>

void getArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the value at %d of this array: \n", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("The value at %d of this array is: %d\n", i + 1, arr[i]);
    }
}

int main()
{
    //use of malloc
    int *ptr, i, n;
    printf("Enter the size of the array you want to create: \n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    getArray(ptr, n);
    printArray(ptr, n);

    // //use of calloc
    // int *ptr, i, n;
    // printf("Enter the size of the array you want to create: \n");
    // scanf("%d", &n);
    // ptr = (int *)calloc(n, sizeof(int));
    // // getArray(ptr, n);
    // printArray(ptr, n);
    // return 0;

    //use of realloc
    printf("Enter the size of the NEW ARRAY you want to create: \n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    getArray(ptr, n);
    printArray(ptr, n);

    //free the memmory
    free(ptr);
    // printf("Now, garbage values stored in the memmory after freeing it are: \n")
    // printArray(ptr, n);
}