/*
Author: Ashmit JaiSarita Gupta
Purpose: To Understand Structure.
Date Created: 11-10-2021
*/
/*
Notes / Theory: 
We have seen in the previous tutorials that how variables store one piece of information and how arrays store the information of the same data type. Variables and arrays can handle a great variety of situations. But quite often we have to deal with the collection of dissimilar data types. For dealing with dissimilar data types, C provides a data type called ‘structure’. A structure gathers together, different information that belongs to different data types.

What is a Structure in C?
 Structures are usually used when we want to store dissimilar data together.For example, we want to store data about a book. Book has its title, author name, number of pages and price. All of the book attributes belong to different data types. One way to store the data is to construct individual arrays, and another method is to use a structure variable. Structure elements are always stored in contiguous memory locations.

 The general form of a structure declaration statement is given below: 

    struct <structure name> { 
    structure element 1;
    structure element 2; 
    structure element 3;
    } struct_variable;
    //Or
    struct book  b1, b2, b3 ;  

 Before the final semicolon, we specify the structure variables but it is optional. We can also specify the structure variable in main body. The keyword struct should be used to define variables of structure type.

 Following is the example of declaring struct in C:

    struct Books{  
    char title[20];  
    char author_name[100];  
    float price; 
    int pages;} book1; 

How to Access the Structure Elements?
 As we use subscript to access individual elements of an array. But in the case of structures, to access any element, we use the operator (.). This dot operator is coded between the structure variable name and the structure member that we wish to access.

 Note that before the dot operator there must always be a structure variable and after the dot operator there must always be a structure element.

 Example:-
    #include <stdio.h>
    struct book {
    char title[20];  
    char Author_name[100];  
    float price;  
    int pages;
    } ;
    int main( ) {
    struct book book1 = { "Cprogramming", "ABC", 130.00, 550 } ;
    printf ( "\n Title = %s", book1.title ) ;
    printf ( "\n Name = %s", book1.Author_name ) ;
    printf ( "\n Price = %.2f",book1.price ) ; 
    printf ( "\n Pages = %d", book1.pages ) ;
    return 0;}

 
Additional Features of Structures:-
    1 - We can assign the values of a structure variable to another structure variable of the same type using the assignment operator.
    2 - Structure can be nested within another structure.
    3 - We can pass the structure variable to a function. We can pass the individual structure elements or the entire structure variable into the function as an argument.
    4 - We can have a pointer pointing to a struct just like the way we can have a pointer pointing to an int, or a pointer pointing to a char.

Where are structures useful?
 Structures can be used for a variety of purposes like:

    1 - Structures are used to store a large amount of data.
    2 - They are used to send data to the printer.
    3 - For placing the cursor at an appropriate position on screen, we can use structure.
    4 - It can be used in drawing and floppy formatting.
    5 - We use structures in finding out the list of equipment attached to the computer

Summary:-
 In this tutorial, we have learned about structures in C. Structures are usually used when we want to store dissimilar data together. Its members can be accessed through a structure variable using a dot (.) operator. We can declare many structure variables for same structure and memory will be allocated for each separately.

 
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