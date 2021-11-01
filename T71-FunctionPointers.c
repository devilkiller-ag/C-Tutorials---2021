/*
Author: Ashmit JaiSarita Gupta
Topic: function Pointers
Date Created: 18-10-2021
*/
/*
Notes / Theory: 

*/
#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

void greet()
{
    printf("Hello World!\n");
}

int main()
{
    printf("\n");
    printf("File Name: %s\n", __FILE__);
    printf("Today Date: %s\n", __DATE__);
    printf("Current Time: %s\n", __TIME__);
    printf("\n");

    printf("The Sum of 1 and 2 is %d.\n", sum(1, 2)); // Testing the function

    int (*fptr) (int, int);// Declaring a function pointer - Space is not allocated 
    fptr = &sum; //Creating a function pointer - Space is allocated

    int d = (*fptr)(4, 6); //Dereferencing a function pointer
    printf("The Sum of 4 and 6 is %d.\n", d);

    return 0;
}