/*
Author: Ashmit JaiSarita Gupta
Purpose: To create function for calculating fibonacci Number at nth position using itterative and recursive method, And to understand why reccursive method is not always good.
Date Created: 06-10-2021
*/
#include <stdio.h>
int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return (fib_recursive(n - 1) + fib_recursive(n - 2));
    }
}

int fib_iterative(int n)
{
    int a = 0, b = 1, i;
    for (i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b-a;
    }

    return a;
}

int main()
{
    int number;
    printf("Enter the index to get a fibonacci series...\n");
    scanf("%d", &number);
    printf("The value of fibonacci number at position no. %d Using iterative approach is %d .\n", number, fib_iterative(number));
    printf("The value of fibonacci number at position no. %d Using recursive approach is %d .\n", number, fib_recursive(number));
    return 0;
}
