/*
Author: Ashmit JaiSarita Gupta
Date Created: 05-10-2021
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, index = 1, j = 0;
    printf("Index at starting is%d\n", index);
    printf("Enter a number\n");
    scanf("%d", &num);

    printf("Ascending Order:\n");
    do
    {
        printf("%d\n", index);
        index += 1;
    } while (index <= num);
    printf("After Do While Loop Now the index is %d\n", index);

    printf("Decending Order:\n");
    index = num;
    while (index > 0)
    {
        printf("%d\n", index);
        index -= 1;
    }
    printf("After While Loop Now the index is %d\n", index);

    printf("Ascending Order:\n");
    for (; index < num; index++)
    {
        printf("%d %d\n", index, j);
    }
    printf("After For Loop Now the index is %d\n", index);

    printf("For Try 1:\n");
    int i, k, l, m;
    for (i = 0, k = 0; i < 10, k < 15; i++)
    {
        printf("%d %d\n", i, k);
        k++;
    }

    printf("For Try 2:\n");
    for (l = 0, m = 0; l < 15, m < 10; l++, m++)
    {
        printf("%d %d\n", l, m);
    }
    
    printf("For Try 3 break:\n");
    int f, age;
    for ( f = 0; f < 10; f++)
    {
        printf("Enter Your Ageb: %d \n", f);
        scanf("%d\n", &age);
        if(age == 10)
        {
            break;
        }
        printf("Today was a good day!\n");
    }

    printf("For Try 4 continue:\n");
    int fc, agec;
    for ( fc = 0; fc < 10; fc++)
    {
        printf("Enter Your Agec %d:\n", fc);
        scanf("%d\n", &agec);
        if(agec < 10)
        {
            continue;
        }
        printf("seven-eleven\n");
        printf("seven-eleven\n");
        printf("seven-eleven\n");
        printf("seven-eleven\n");
        printf("shake 'em up, shake 'em up, shake 'em up, shake 'em\n");
    }
    

    return 0;
}
