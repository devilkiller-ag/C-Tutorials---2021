/*
Author: Ashmit JaiSarita Gupta
Purpose: Reverse The Array
Date Created: 11-10-2021
*/
#include <stdio.h>

void arrayRev(int arr[])
{
    int i, temp;
    for (i = 0; i < 7 / 2; i++)
    {
        //swap item i with (6-i)
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}

void printArray(int arr[])
{
    int i;
    for (i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d.\n", i + 1, arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 7, 3, 4, 5, 67};
    printf("Original Array: \n");
    printArray(arr);
    printf("Reversed Array: \n");
    arrayRev(arr);
    printArray(arr);
    return 0;
}