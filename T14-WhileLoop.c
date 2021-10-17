/*
Author: Ashmit JaiSarita Gupta
Purpose: While Loop In C 
Date Created: 5-10-2021
*/
/*
Notes / Theory: 
A Loop executes the sequence of statements many times until the condition becomes false. In the previous tutorial, we learned the do-while loop. In this tutorial, we will learn while loop in C programming.

While loop is also called as a pre-tested loop. A while loop allows code to be executed multiple times, depending upon a given Boolean(true or false) condition. The while loop is mostly used in the case where the number of iterations is not known. If the number of iterations is known, then we use for loop.

The Syntax of while loop is:
    while (condition test)
    {
    // Set of statements
    }

The body of while loop can contain a single statement or a block of statements. The condition may be any expression, and true is any nonzero value. The loop iterates while the test condition evaluates to true.

When the condition becomes false, the program control passes to the line immediately following the loop.

Example:-

    1.    #include<stdio.h>  
    2.    intmain(){    
    3.    inti=0;      
    4.    while(i<=5){      
    5.    printf("%d \n",i);      
    6.    i++;      
    7.    }  
    8.    return0;  
    9.    }
    
Explanation of the above program:-
    1) We have initialized a variable i with value 0. This code will print from 0 to 4; hence the variable is initialized with value 0. 
    2)In a while loop, we have provided a condition (i<=5), which means the loop will execute the body until the value of i becomes 5. After that, the loop will be terminated.
    3)In the body of a loop, we have a print function to print our number and an increment operation ( i++) to increment the value per execution of a loop. This process will continue until the value becomes 5 and then it will print the number and then terminate the loop.

Properties of while loop:-
Following are some properties of while loop.

    1 - A conditional expression written in the brackets of while is used to check the condition. The Set of statements defined inside the while loop will execute until the given condition returns false.
    2 - The condition will return 0 if it is true. The condition will be false if it returns any nonzero number.
    3 - In the while loop, we cannot execute the loop until we do not specify the condition expression.
    4 - It is possible to execute a while loop without any statements. This will give no error. 
    5 - We can have multiple conditional expressions in a while loop.
    6 - Braces are optional if the loop body contains only one statement.
*/
#include <stdio.h>
int main()
{
    int i = 0;
    while (i < 54)
    {
        printf("%d\n", i);
        i = i + 1;
    }

    return 0;
}