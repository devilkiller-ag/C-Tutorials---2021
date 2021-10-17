/*
Author: Ashmit JaiSarita Gupta
Purpose: To Understand Typecasting In C
Date Created: 5-10-2021
*/
/*
Notes / Theory: 
Typecasting is a way to convert one data type into another one. It is also known as data conversion or type conversion.
 

C Language Provides two methods of type casting :
    1 - Implicit type casting
    2 - Explicit type casting

Implicit type casting:-
 Implicit type casting means conversion of data types from one to another without losing its original meaning or sense.

 In this type casting program automatically converts the variable from one data type to other. It follows strict rules in converting data type of variables as it always converts lower data types to higher ones.
 
    #include<stdio.h> 
    int main() 
    { 
        short a=10; //initializing variable of short data type 
        int b; //declaring int variable 'b'. 
        b=a; //Implicit type casting 
        printf("%d\n",a); 
        printf("%d\n",b); 
    } 

Explicit type casting:- 
 Explicit type casting means conversion of data type from one to another forcefully by programmer. It is user defined conversion.

    #include<stdio.h> 
    int main() 
    { 
        int a; 
        float b; 
        char c; 
        printf("Enter the value of a\n"); 
        scanf("%d",&a); 
        printf("A is %d\n", a); 
        printf("Enter the value of b\n"); 
        scanf("%f",&b ); 
        printf("B is %d\n", (int) b); 
        printf("Type any character : \n"); 
        scanf(" %c",&c ); 
        printf("Character is %d",(int) c); 
        return 0; 
    } 
That's all about TypeCasting in C Language.
*/
#include <stdio.h>
int main()
{
    int a = 3;
    float n = (float)54 / 5;
    printf("The Value of a is %f\n", b) return 0;
}