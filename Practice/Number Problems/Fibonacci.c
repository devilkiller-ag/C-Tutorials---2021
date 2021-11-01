/*
Author: Ashmit JaiSarita Gupta
Purpose: To Understand Concept of Fibonacci Series and time complexity drawback of reccursion.
Date Created: 10-10-2021
*/
#include <stdio.h>

int fib_rec(int n)
{
    if (n == 1 || n == 2) //base case
    {
        return 1; //First and Second Fibonacci numbers are = 1
    }
    return fib_rec(n - 1) + fib_rec(n - 2); // fib no. = sum of previous two numbers
}

int fib_it(int n)
{
    int a = 0, b = 1, i;
    for (i = 0; i < n - 1; i++)
    {
        b += a;
        a = b - a;
    }
    return b;
}

int main()
{
    int n, nfib;
    printf("Enter the index: \n");
    scanf("%d", &n);
    // nfib = fib_rec(n); //here recursion is an bad idea due to time comlexity.
    nfib = fib_it(n);
    printf("The Fibbonaci Number at index %d is %d.\n", n, nfib);
    return 0;
}