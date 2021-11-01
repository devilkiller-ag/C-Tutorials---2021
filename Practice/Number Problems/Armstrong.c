/*
Author: Ashmit JaiSarita Gupta
Purpose: Armstrong Number
Date Created: 10-10-2021
*/
#include <stdio.h>

int cubesum_rec(int n, int sum)//formal parameter
{
    int rem = n % 10;//local variable
    if (n == 0)
    {
        return sum;
    }
    sum = sum + rem * rem * rem;
    return cubesum_rec(n / 10, sum);
}

int main()
{
    int n; //local variable
    printf("Enter a number: \n");
    scanf("%d", &n);
    int cubesumr = cubesum_rec(n, 0);//actual parameter
    if(cubesumr == n)
    {
        printf("%d is a Armstrong number.");
    }
    else{
        printf("%d is not a Armstrong number.");
    }
    return 0;
}