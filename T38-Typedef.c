/*
Author: Ashmit JaiSarita Gupta
Purpose: Tu understand typedef
Date Created: 12-10-2021
*/
/*
Notes / Theory: 
In C programming, we use the typedef declarations to create shorter and meaningful names for types already defined by C like int, float or char. In this tutorial, we will learn about the role of typedef in C language more in detail.


 
What is typedef in C?
 A typedef is a keyword that is used to assign alternative names to existing datatypes. We use typedef with user defined datatypes, when names of the datatypes become slightly complicated to use in programs. Typedefs can be used to:

 1 - Provide the clarity in the code
 2 - it makes easier to change the underlying data types that   you use
3 - Typedefs makes the code more clear and easier to modify.

 Following is the syntax for using typedef,

    typedef <previous_name> <alias_name>

 In the above syntax, 'previous_name' is the name of an already existing variable while 'alias_name' is another name given to the existing variable.

For example, suppose we want to create a variable of type unsigned long, then it becomes a time taking task if we want to declare multiple variables of this type. To overcome this problem, we use a typedef keyword.

    typedef unsigned long ul;  
 The above example defines a term ul for an unsigned long datatype. Now this ul identifier can be used to define unsigned long type variables.

    ul a, b, c;
Let's see an example.

    #include <stdio.h>
    int main() {
                typedef unsigned long ul;
                ul a = 5, b = 8;
                printf("a = %d\n", a);
                printf("b = %d\n", b);
                return 0;
    }

There are various applications of typedef. The following are the applications of the typedef.

    1 - Typedef can be used with an array mostly with multi-dimensional array. It will increases the readability.
    2 - As we know, the typedef can be implemented for defining a user-defined data type with a specific name and type. We can also use a typedef with structures of C language.

        typedef struct
        {
            structure element1;
            structure element2;
            structure element3;
        } name_of_type;

     Here name_of_type can be implemented by declaring a variable of this structure type.

            name_of_type type1, type2;
            
    3 - typedef can be used for providing a pseudo name to pointer variables as well.
        typedef int* ptr
        ptr a, b, c;

 
Advantages of typedef:-
    1 - Typedef increases the readability of the code. If we are using structure and function pointer in our code, it will increase the readability of code.
    2 - With the help of typedef, we can use the same name for the different types in different scopes.
    3 - In the case of structure, if we use the typedef then we do not require to write struct keyword at the time of variable declaration.
    4 - Typedef increases the portability of the code.
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