/*
Author: Ashmit JaiSarita Gupta
Topic: An program to simulate memory leak.
Date Created: 18-10-2021
*/
/*
Notes / Theory: 

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0, a;
    int *i2;
    while (i < 4555)
    {
        printf("Welcome to Code With Harry...");
        i2 = malloc(34444 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        free(i2); //Without this memmory leak
    }
    return 0;
}