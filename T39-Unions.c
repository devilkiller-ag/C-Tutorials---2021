/*
Author: Ashmit JaiSarita Gupta
Purpose: To understand unions in C
Date Created: 12-10-2021
*/
#include <stdio.h>
#include <string.h>

union Student
{
    int id;
    int marks;
    char fav_char;
    char name[50];
};

int main()
{
    union Student s1;
    s1.id = 1;
    s1.marks = 45;
    s1.fav_char = 'u';
    strcpy(s1.name, "Harry");

    printf("The is id %d.\n", s1.id);
    printf("The is marks %d.\n", s1.marks);
    printf("The is fav_char %c.\n", s1.fav_char);
    printf("The is name %s.\n", s1.name);

    return 0;
}