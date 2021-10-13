/*
Author: Ashmit JaiSarita Gupta
Date Created: 05-10-2021
*/
#include <stdio.h>

int sum(int a, int b);

void printstar(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf(" %c ", '*');
    }
    printf("\n");
}

int takenum()
{
    int i;
    printf("Enter an number: \n");
    scanf("%d", &i);
    return i;
}

int main(){
    int a, b, c;
    a = 12, b = 233, c= sum(a, b);
    printf("Sum is %d. \n", c);
    printstar(7);
    printf("Entered Number is %d \n", takenum());
    return 0;
}

int sum(int a, int b){
    return a + b;
}