/*
Author: Ashmit JaiSarita Gupta
Purpose: This is a Sample C file For illustration of #include preprocessor use in the Tutorial T59-includeANDdefinePreprocessors.c
Date Created: 18-10-2021
*/

#include <stdio.h>
#include <stdlib.h>

int sum = 343;

int Summation(int a, int b)
{
    printf("File Name: %s\n",__FILE__);
    printf("Today Date: %s\n",__DATE__);
    printf("Current Time: %s\n",__TIME__);
    int summy;
    summy = a + b;
    return summy;
}