/*
Author: Ashmit JaiSarita Gupta
Purpose: To understand call by reference
Date Created: 11-10-2021
*/
#include <stdio.h>

void changeValue(int *add);
void optChange(int *falana, int *dhimaka);

int main()
{
    int a = 34, b = 56;
    // printf("The value of a now is %d.\n", a);
    // changeValue(&a);
    printf("The value of a now is %d.\n", a);
    printf("The value of b now is %d.\n", b);
    optChange(&a, &b);
    printf("The value of a now is %d.\n", a);
    printf("The value of b now is %d.\n", b);
    return 0;
}

void changeValue(int *address)
{
    *address = 345;
}

/*
Quick Quiz:
Given value a and b.
Assign a = a+b;
b = a-b;
Using Call By Reference.
*/

void optChange(int *a, int *b)
{
    int sum = *a + *b;
    int dif = *a - *b;
    *a = sum;
    *b = dif;
}