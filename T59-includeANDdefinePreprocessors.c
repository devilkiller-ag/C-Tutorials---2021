/*
Author: Ashmit JaiSarita Gupta
Purpose: To Learn about #include and #define preprocessors in C.
Date Created: 18-10-2021
*/
/*
Notes / Theory: 

*/
#include <stdio.h>
#include "T61-SampleCForT59.c"

#define PI 3.14

#define SQUARE(r) r *r //MACRO

int main()
{
    int var = 0;
    int suma = Summation(12, 23);
    printf("THis is Me! %d\n", var);
    printf("THis is Suma %d!\n", suma);
    printf("The value of pi is %f!\n", PI);
    printf("The area of circle of radius 2 is %f!\n", PI * SQUARE(2));

    return 0;
}