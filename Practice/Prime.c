/*
Author: Ashmit JaiSarita Gupta
Purpose: Pimr Number
Date Created: 10-10-2021
*/
#include <stdio.h>
#include <stdbool.h>

bool prime_it(int n)
{
    bool pb = true;
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            pb = false;
        }
    }
    return pb;
}

// bool prime_rec(int n)
// {
//     if(n==2)
//     {
//         return true;
//     }
//     return prime_rec()
// }

int main()
{
    int n;
    printf("Enter the Number: \n");
    scanf("%d", &n);
    if (prime_it(n))
    {
        printf("%d is a Prime Number.\n", n);
    }
    else
    {
        printf("%d is not a Prime Number.\n", n);
    }
    return 0;
}