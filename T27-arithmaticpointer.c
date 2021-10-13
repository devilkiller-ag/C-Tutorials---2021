/*
Author: Ashmit JaiSarita Gupta
Date Created: 06-10-2021
*/
#include <stdio.h>
int main()
{
    // int a = 3;
    // int *ptra = &a;
    // printf("%d\n", ptra);
    // printf("%d\n", ptra+1);

    // char a = '3';
    // char *ptra = &a;
    // printf("%d\n", ptra);
    // ptra++;
    // printf("%d\n", ptra);
    // printf("%d\n", ptra);
    // printf("%d\n", ptra-2);

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    printf("The Va;ue at position 3 of the array is %d \n", &arr[0]);
    printf("The address of first element of the array is %d \n", &arr[0]);
    printf("The address of first element of the array is %d \n", arr);
    printf("The address of second element of the array is %d \n", &arr[1]);
    printf("The address of second element of the array is %d \n", arr + 1);
    printf("The address of third element of the array is %d \n", &arr[2]);
    printf("The address of third element of the array is %d \n", arr + 2);

    printf("The value at address of first element of the array is %d \n", *(&arr[0]));
    printf("The value at address of first element of the array is %d \n", arr[0]);
    printf("The value at address of first element of the array is %d \n", *(arr));
    printf("The value at address of second element of the array is %d \n", *(&arr[1]));
    printf("The value at address of second element of the array is %d \n", arr[1]);
    printf("The value at address of second element of the array is %d \n", *(arr + 1));
    printf("The value at address ofthird element of the array is %d \n", *(&arr[2]));
    printf("The value at address of third element of the array is %d \n", arr[2]);
    printf("The value at address of third element of the array is %d \n", *(arr + 2));
    return 0;
}