/*
Author: Ashmit JaiSarita Gupta
Purpose: To understand storage class - Auto, Extern Static and Register Storage Classes.
Date Created: 12-10-2021
*/
#include <stdio.h>
#include "T46-ExternLearnThroughT49-StorageClass.c"

// int sum = 34;

int myfunc(int a, int b)
{
    // auto int myvar;
    // extern int sum;
    static int myvar;
    myvar++;
    printf("The sum is %d.\n", myvar);
    // myvar = a+b;
    return myvar;
}


int main()
{
    // Declaration - Telling the compiler about the variable (No space reserved)
    //Definition - Declaration + space reservation
    /*register*/ int myvar = myfunc(3, 5);;
    myvar = myfunc(3, 5);
    myvar = myfunc(3, 5);
    myvar = myfunc(3, 5);
    myvar = myfunc(3, 5);
    myvar = 98;
    return 0;
}