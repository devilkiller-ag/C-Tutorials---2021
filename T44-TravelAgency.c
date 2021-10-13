/*
Author: Ashmit JaiSarita Gupta
Purpose: Travel Agency Management

You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route 
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
Use structures.

Date Created: 11-10-2021
*/
#include <stdio.h>
#include <string.h>

struct Driver
{
    char name[50];
    int dl;
    char route[100];
    int kms;
};


int main()
{
    struct Driver d1;
    int i, x, n;
    printf("Enter the number of drivers: \n");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\n");
        printf("Enter the details of Driver %d: \n", i+1);
        printf("Enter the name of Driver %d: \n", i+1);
        scanf("%d", x);
        gets(d1.name);
        printf("Enter the driving licence number of Driver %d: \n", i+1);
        scanf("%d", &d1.dl);
        printf("Enter the route taken by Driver %d: \n", i+1);
        scanf("%d", x);
        gets(d1.route);
        printf("Enter the approx distance in kms travelled by the Driver %d: \n", i+1);
        scanf("%d", &d1.kms);
        printf("\n");
        printf("The details of Driver %d are: \n", i+1);
        printf("The name of Driver %d: %s \n", i+1, d1.name);
        printf("The driving licence number of Driver %d: %d \n", i+1, d1.dl);
        printf("The route taken by Driver %d: %s \n", i+1, d1.route);
        printf("The approx distance in kms travelled by the Driver %d: %d \n", i+1, d1.kms);
        printf("\n");
    }
    return 0;
}