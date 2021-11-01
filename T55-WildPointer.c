/*
Author: Ashmit JaiSarita Gupta
Purpose: To understand Wild Pointers.
Date Created: 18-10-2021
*/
/*
Notes / Theory: 

*/
#include <stdio.h>
#include <stlib.h>
int main()
{
    int a =343;
    int *ptr; // This is a wild pointer
    // *ptr = 34; // This is not a good thing to do.
    ptr = &a; // ptr is no longer a wild pointer.
    printf("The value of a is %d.\n", *ptr);
    return 0; 
}