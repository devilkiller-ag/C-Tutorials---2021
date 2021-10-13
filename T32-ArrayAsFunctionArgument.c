/*
Author: Ashmit JaiSarita Gupta
Purpose: 
Date Created: 
*/
#include <stdio.h>

int func1(int array[])
{
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("The value at index %d is %d.\n", i, array[i]);
    }
    // array[0] = 382; //Very important point that if you change any value here, it gets reflected in main
}

void func2(int *ap);
void func3(int arrari[2][2]);

int main()
{
    int arr[] = {23, 13, 3, 4};
    int arr2[2][2] = {{1, 2}, {3, 4}};
    // printf("The value at index 0 is %d.\n", arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d.\n", arr[0]);

    // func2(arr); //arr is the pointer of first element in array arr[]
    // printf("\n");
    // func2(arr);
    func3(arr2);

    return 0;
}

void func2(int *ptr)
{
    int i;
    for (i = 0; i < 4; i++)
    {
        // printf("The value at index %d is %d.\n", i, ptr[i]); //Same as below line
        printf("The value at index %d is %d.\n", i, *(ptr+i)); //Same as above line
    }
    *(ptr + 2) = 6534;
}

void func3(int array[2][2])
{
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("The value at index (%d, %d) is %d.\n", i, j, array[i][j]);
        }
    }
}