/*
Author: Ashmit JaiSarita Gupta
Purpose: To understand Void Pointer.
Date Created: 12-11-2021
*/
/*
Notes / Theory: 
In tutorial #26, we learned about pointers. In this tutorial, we are going to learn about Void pointers and their functionalities. As we are already familiar, that void has no return type i.e., functions that are not returning anything are given the type void. So, in case of void pointers, they can be typecast into any data type whenever we want, meaning we do not have to decide a type for the pointer initially. In simple words, it is a general-purpose pointer variable. 

We will try to understand the functionality of the void pointer with a couple of examples.

 Example1:
 
    int x = 1;
    void *pointerrr = &x;
 Now, in the above example, the data type of the void pointer is now int as we have stored an integer value in it. 

 Example2:

    char x = 'a';
    void *pointerrr = &x;
 However, in this example, the void pointer’s data type has shifted to char as we have stored a character value in it. 

 We saw the use of malloc() and calloc() for dynamic memory allocation in tutorial #47. Here we will discuss the concept as we can allocate any data type to them if we request the memory from the heap using the void pointer. So void pointer comes in handy for these two functions because we can typecast them in any variable type.  

Important points:-
    1 - C does not allow void pointers to be dereferenced. 
    2 - We cannot use pointer arithmetic with void pointers.
Let us understand the dereference concept in a little bit more detail with the help of an example.

Example 1:

    int a = 1;  
    void * pointerrr;  
    pointerrr =&a;  
    printf("%d",* pointerrr);
 This program will, through a compile-time error, as we can not dereference a void pointer, meaning that we have to typecast the pointer every time it is being used.

Now let us take another example.

Example 2:

    int a = 1;  
    void * pointerrr;  
    pointerrr =&a;  
    printf("%d",*(int*) pointerrr);
 In this example, the compiler will not throw any error and will directly output the result because we are using the type along with the pointer. 
*/
#include <stdio.h>
int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &a;
    printf("The Value of a is %d\n", *((int *)ptr));
    ptr = &b;
    printf("The Value of a is %f\n", *((float *)ptr));
    return 0;
}