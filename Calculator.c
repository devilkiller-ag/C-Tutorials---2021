/*
Author: Ashmit JaiSarita Gupta
Date Created: 04-10-2021
*/
#include <stdio.h>
int main()
{
    /* code */
    int option = 0, a = 0, b = 0;
    do
    {
        /* code */
        printf("\nSelect the operation you want to perform on two integer numbers: \n");
        printf("Press 1 for Sum.\n");
        printf("Press 2 for Sub.\n");
        printf("Press 3 for Pro.\n");
        printf("Press 4 for Div.\n");
        printf("Press 5 for Mod.\n");
        printf("Press 6 for Pow.\n");
        printf("Press 7 to run the program once again.\n");
        printf("Press 8 to exit program.\n");
        scanf("%d", &option);
        printf("You have choosen option: %d \n", &option);

        switch (option)
        {
        case 1:
            printf("Enter number a: \n");
            scanf("%d", &a);
            printf("Enter number b: \n");
            scanf("%d", &b);
            printf("%d", sum(a, b), "\n");
            break;
        case 2:
            printf("Enter number a: \n");
            scanf("%d", &a);
            printf("Enter number b: \n");
            scanf("%d", &b);
            printf("%d", sub(a, b), "\n");
            break;
        case 3:
            printf("Enter number a: \n");
            scanf("%d", &a);
            printf("Enter number b: \n");
            scanf("%d", &b);
            printf("%d", pro(a, b), "\n");
            break;
        case 4:
            printf("Enter number a: \n");
            scanf("%d", &a);
            printf("Enter number b: \n");
            scanf("%d", &b);
            printf("%d", div(a, b), "\n");
            break;
        case 5:
            printf("Enter number a: \n");
            scanf("%d", &a);
            printf("Enter number b: \n");
            scanf("%d", &b);
            printf("%d", mod(a, b), "\n");
            break;
        case 6:
            printf("Enter number a: \n");
            scanf("%d", &a);
            printf("Enter number b: \n");
            scanf("%d", &b);
            printf("%d", powe(a, b), "\n");
            break;
        case 7:
            option = 0;
            break;
        case 8:
            option = 8;
            break;

        default:
            printf("Select Valid Option!\n");
            option = 0;
            break;
        }

    } while (option != 8);

    return 0;
}
int sum(int a, int b)
{
    return a + b;
}
int pro(int a, int b)
{
    return a * b;
}
int sub(int a, int b)
{
    return a - b;
}
int div(int a, int b)
{
    return a / b;
}
int mod(int a, int b)
{
    return a % b;
}
int powe(int a, int b)
{
    return a ^ b;
}
