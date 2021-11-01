/*
Author: Ashmit JaiSarita Gupta
Purpose: Find factorial of a number in various ways.
Date Created: 10-10-2021
*/
#include <stdio.h>

int fact_rec(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * fact_rec(n - 1);
}

int fact_it(int n)
{
    int fact = 1, i;
    for(i = n; i > 0; i--)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    int factit = fact_it(n);
    printf("The factorial of %d is %d.\n", n, factit);
    int factrec = fact_rec(n);
    printf("The factorial of %d is %d.\n", n, factrec);
    return 0;
}