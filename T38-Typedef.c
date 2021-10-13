/*
Author: Ashmit JaiSarita Gupta
Purpose: Tu understand typedef
Date Created: 12-10-2021
*/
#include <stdio.h>
#include <string.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[50];
} std;

int main()
{
    // int *a, b;
    int c = 89;
    // a = &c;
    // b = &c; //eror as b is not pointer.
    typedef int *intPointer;
    intPointer a, b;
    a = &c;
    b = &c; 

    // struct Student s1, s2;
    // std s1, s2;
    // s1.id = 23;
    // s2.id = 86;
    // printf("Value of s1 id is %d.\n", s1.id);
    // printf("Value of s2 id is %d.\n", s2.id);

    // typedef <previous_name> <alias_name>;
    // typedef unsigned long ul;
    // typedef int integer;
    // ul l1, l2, l3;
    // integer a = 4;
    // printf("Value of a is %d.", a);
    return 0;
}