/*
Author: Ashmit JaiSarita Gupta
Purpose: To Understand Structure.
Date Created: 11-10-2021
*/
#include <stdio.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[50];
} luv;

struct Student harry, ravi;

int main()
{
    // struct Student harry, ravi, luv;
    harry.id = 1;
    ravi.id = 2;
    luv.id = 3;
    harry.marks = 466;
    ravi.marks = 464;
    luv.marks = 446;
    harry.fav_char = 'p';
    ravi.fav_char = 'q';
    luv.fav_char = 'r';
    strcpy(harry.name, "Harry Potter - The Student of the Year.");
    printf("Harry's name is: %s\n", harry.name);
    printf("Harry has id:  %d\n", harry.id);
    printf("Harry got %d marks. \n", harry.marks);
    printf("Favorite Char of Harry is %c.  \n", harry.fav_char);
    printf("Ravi has id:  %d\n", ravi.id);
    printf("Ravi got %d marks. \n", ravi.marks);
    printf("Favorite Char of Ravi is %c.  \n", ravi.fav_char);
    printf("Luv has id:  %d\n", luv.id);
    printf("Luv got %d marks. \n", luv.marks);
    printf("Favorite Char of Luv is %c.  \n", luv.fav_char);
    printf("Luv's name is: %s\n", luv.name); //prints garbage value as no name of luv is initialised.
    return 0;
}