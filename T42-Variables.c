/*
Author: Ashmit JaiSarita Gupta
Purpose: To understand local, global, static variable, formal argument and scope of variable.
Date Created: 11-10-2021
*/
#include <stdio.h>

int ret()
{
    return 43*3;
}

int b = 34; //global variable

int func1(int b) //formal argument
{
    // static int myvar1;
    // printf("The value of myvar is %d.\n", myvar1);

    static int myvar = 90;
    printf("The value of myvar is %d.\n", myvar);
    myvar++;

    // static myvar2 = ret(); /*ERROR: As static variable only take contant literal value initialisation. 
    // Because initialisation of static vars is done before running main function and no function is executed
    // before main function. */

    // int loc = 23; //local variable
    // printf("The value of b inside func1 is %d.\n", b);
    // printf("The address of b inside func1 is %d.\n", &b);

    return b + myvar;
}

int main()
{
    int b = 344;
    // printf("The address of b inside main is %d.\n", &b);

    int val = func1(b); //actual argument
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *a = &val;
    // printf("The Value of func1 is %d.\n", val);
    return 0;
}