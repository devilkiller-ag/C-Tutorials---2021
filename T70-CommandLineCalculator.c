/*
Author: Ashmit JaiSarita Gupta
Topic: Command Line Calculator in C
Date Created: 18-10-2021
*/
/*
Question: 
    // You have to create a command line utility to add/subtract/divide/multiply two numbers
    // First command line argument of your c program must be the operation.
    // The next arguments being the two numbers. For example:
    // >>Command.c add 45 4
    // >>49
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *operation;
    int num1, num2, result;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);
    
    if (strcmp(argv[1], "add") == 0)
    {
        printf("%d", num1 + num2);
    }

    if (strcmp(argv[1], "sub") == 0)
    {
        printf("%d", num1 - num2);
    }

    if (strcmp(argv[1], "pro") == 0)
    {
        printf("%d", num1 * num2);
    }

    if (strcmp(argv[1], "div") == 0)
    {
        printf("%d", num1 / num2);
    }
    return 0;
}
