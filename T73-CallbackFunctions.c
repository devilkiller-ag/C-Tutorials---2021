/*
Author: Ashmit JaiSarita Gupta
Topic: Callback Function
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



void greetHelloAndExecute(int (*fptr)(int, int))
{
    printf("Hello User!\n");
    printf("The Sum of 5 and 7 is %d.\n", fptr(5, 7));
}

void greetMorningAndExecute(int (*fptr)(int, int))
{
    printf("Good Morning User!\n");
    printf("The Sum of 5 and 7 is %d.\n", fptr(5, 7));
}

void greetAfternoonAndExecute(int (*fptr)(int, int))
{
    printf("Good Afternoon User!\n");
    printf("The average of 5 and 7 is %d.\n", fptr(5, 7)/2);
}

void greetEveningAndExecute(int (*fptr)(int, int))
{
    printf("Good Evening User!\n");
    printf("The average of 5 and 7 is %d.\n", fptr(5, 7)/2);
}

int main()
{
    int (*ptr)(int, int); // Declaring a function pointer - Space is not allocated
    // ptr = &sum; //Creating a function pointer - Space is allocated
    ptr = sum; //Creating a function pointer - Space is allocated
    // ptr = &sum and ptr = sum, works same in case of function pointers - they will point to function
    greetHelloAndExecute(ptr);
    greetMorningAndExecute(ptr);
    greetAfternoonAndExecute(ptr);
    greetEveningAndExecute(ptr);

    return 0;
}