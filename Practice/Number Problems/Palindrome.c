/*
Author: Ashmit JaiSarita Gupta
Purpose: Palindrome Number
Date Created: 10-10-2021
*/
#include <stdio.h>
#include <stdbool.h>

void palin_it(int n)
{
    int temp = n,rem, rev = 0, i;
    while(n>0)
    {
        rem = n%10;
        rev = (rev * 10) + rem;
        n = n/10;
    }
    if(rev == temp)
    {
        printf("%d is a palindrome number. \n", temp);
    }
    else{
        printf("%d is not a palindrome number. \n", temp);
    }
}

int palin_rec(int n, int rev) //rev = 0
{
    int rem; //to store remainder of n/10
    if(n == 0) // base case
    {
        return rev;
    }
    rem = n%10;
    rev = (rev * 10) + rem; //stores the reverse of a number
    return palin_rec(n/10, rev);
}

//Driver Code
int main()
{
    int n, temp;
    printf("Enter a Number: \n");
    scanf("%d", &n);
    // palin_it(n);
    temp = palin_rec(n, 0);
    printf("The reverse of the number %d is %d.\n", n, temp);
    if (temp == n)
    {
        printf("%d, is a palindrome number.\n", n);
    } else {
        printf("%d, is not a palindrome number.\n", n);
    }
    return 0;
}