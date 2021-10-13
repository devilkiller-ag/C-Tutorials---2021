/*
Author: Ashmit JaiSarita Gupta
Purpose: To understand Void Pointer.
Date Created: 12-11-2021
*/
#include <stdio.h>
int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &a;
    printf("The Value of a is %d\n", *((int *)ptr));
    ptr = &b;
    printf("The Value of a is %f\n", *((float *)ptr));
    return 0;
}