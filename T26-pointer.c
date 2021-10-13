/*
Author: Ashmit JaiSarita Gupta
Date Created: 06-10-2021
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("Lets learn Pointers\n");
    int a = 76;
    int *ptra = &a;

    printf("The value of a is %d\n", a);
    printf("The address of a is %p\n", *ptra);
    printf("The address of a is %p\n", ptra);
    printf("The value of a is %d\n", *ptra);
    printf("The address of pointer to a is %d\n", &ptra);
    printf("The value of a is %x\n", a);
    printf("The value of a is %x\n", *ptra);//in hexadecimal

    // int *ptr2;
    // printf("The address of some garbage is %p\n", *ptr2);
    int *ptr2 = NULL;
    printf("The address of some garbage is %p\n", ptr2);

    
    return 0;
}
