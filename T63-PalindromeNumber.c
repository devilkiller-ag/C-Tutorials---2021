/*
Author: Ashmit JaiSarita Gupta
Purpose: To check Weather The Number Is Palindrome Or Not.
Date Created: 18-10-2021
*/
/*
Notes / Theory: 

*/
#include <stdio.h>

void isPalindrome(int n)
{
    int mir = n, rem, rev = 0;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if(rev == mir)
    {
        printf("%d is a Palindrome Number.\n", mir);
    }
    else
    {
        printf("%d is not a Palindrome Number.\n", mir);
    }
}

int main()
{
    int number;
    printf("\n");
    printf("File Name: %s\n", __FILE__);
    printf("Today Date: %s\n", __DATE__);
    printf("Current Time: %s\n", __TIME__);
    printf("\n");
    printf("Enter the number to check for Palindrome: \n");
    scanf("%d", &number);
    isPalindrome(number);
    return 0;
}