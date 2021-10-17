/*
Author: Ashmit JaiSarita Gupta
Purpose: To Understand Arrays.
Date Created: 06-10-2021
*/
/*
Notes / Theory: 
An array is a collection of data items of the same data type. And it is also known as subscript variable.

    1 - Items are stored at contiguous memory locations in Arrays.
    2 - It can also store the collection of derived data types such as pointers, structures etc.
    3 - The C Language places no limits on the number of dimensions in an array i.e. we can create any no. of dimension array E.g. 2d array, 3d array etc.

Most Commonly used dimensions of Array :-

    1 - A one-dimensional array is like a list.
    2 - A two-dimensional array is like a table.

Some texts refer to one-dimensional arrays as vectors and two-dimensional arrays as matrices and use the general term Arrays when the no. of dimensions is unspecified or unimportant.
 
Why do we need Arrays ?
 Code that use arrays for managing large no. of same type variables is more organized and readable.

    1 - Arrays allow us to create many variables by just a single line. It means there is no need to create or specify each and every variable.
 
Advantage of Arrays :-
    1 - It is used to represent multiple data items of same type by using only single name.
    2 - Accessing an item in a given array is very fast.
 

Properties of Array :-
    1 - Data in an array is stored in contiguous memory locations in RAM.
    2 - Each element of an array is of same size i.e. their data types are same so memory consumed by each is also same.
    3 - Any element of the array with given index can be accessed very quickly by using its address which can be calculated using the base address and the index.

Index No. – It is the special type of no. which allows us to access variables of Arrays i.e. index no. provides a method to access each element of an array in a program.

 

Example for One-dimensional Array :-

    #include<stdio.h>

    int main()
    {
        //One dimensional array
        int marks[10], sum=0;
        printf("Enter marks of 10 students : \n\n");
        for (int i=0;i<=9,i++)
        {
        printf("Marks of %d student : ", i+1);
        scanf("%d", &marks[i]);
        sum += marks[i]
        }

        int average = sum/10;
        printf("\nThe average marks of 10 students are %d", average);
        return 0;
    }

Example for Two-Dimensional Array :-

    #include<stdio.h>

    int main()
    {

        //Two dimensional array
        int Matrice[3][3; 
        printf("This Program will print no. from 1-9 in matrice form : \n\n");
        for (int i=0;i<3,i++)
        {
            for (int j=0;j<3;j++)
            {
                printf("Enter no. (1-9) : ");
                scanf("%d", &Matrice[i][j]);
            }
        }
        printf("\n\n\n");
        for (int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                printf("%d\t", Matrice[i][j]);
            }
            printf("\n");
        }

        printf("\n\n\n So that's the matrice form of no from 1-9");
        return 0;
    }

Now let me tell you in brief about Arrays :- 
 So as we already seen that array is a collection of data items and generally we use arrays when we have to make lots of variables at that time instead of creating each variable, so we can easily declare one array and can access it’s elements using it’s index no. and can do whatever we wish to do with that data.

 So, that’s the use of arrays. And not only this we should have a good command over arrays because it is one of the most important topic in C language. Generally if we access each element of array at that time we use loops for fast calculations or operations.

 And yeah one more thing i.e. you must have seen some memes on programmers i.e. programmers count from 0 not from 1. So the reason behind these memes is this only i.e. Arrays. As in arrays we do indexing from 0 onwards na that’s why these memes are created for programmers. :)
*/
#include <stdio.h>
int main()
{
    // printf("");
    int marks[4] = {12, 34, 54, 67};
    // marks[0] = 34;
    // printf("Marks of student 1 is %d.\n", marks[0]);
    // marks[1] = 21;
    // marks[2] = 22;
    // marks[3] = 23;
    // printf("Marks of student 1 is %d.\n", marks[0]);

    int marky[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};

    int i, j;
    // for (i = 0; i < 2; i++)
    // {
    //     for (j = 0; j < 4; j++)
    //     {
    //         printf("Enter the value of element (%d, %d): \n", i + 1, j + 1);
    //         scanf("%d", &marky[i][j]);
    //     }
    // }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            // printf("The value of element (%d, %d) is %d \n", i + 1, j + 1, marky[i][j]);
            printf(" %d ", marky[i][j]);
        }
        printf("\n");
    }

    return 0;
}