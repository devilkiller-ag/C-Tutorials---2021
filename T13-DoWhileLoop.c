/*
Author: Ashmit JaiSarita Gupta
Purpose: Do While Loop In C
Date Created: 5-10-2021
*/
/*
Notes / Theory: 
A do-while loop executes the statements inside the body of the do-while loop before checking the condition. So if a condition is false in the first place, then they do while would run once. A do-while loop is similar to a while loop, except the fact that it is guaranteed to execute at least one time.

Unlike for and while loops, which test the loop condition first, then execute the code written inside the body of the loop, the do-while loop checks its condition at the end of the loop. Following is the syntax of the do-while loop in C programming.

    do {
    statements );
    } while( test condition );

If the test condition returns true, the flow of control jumps back up to do, and the set of statements in the loop executes again. This process repeats until the given test condition becomes false.

How does the do-while loop work?
    1 - First, the body of the do-while loop is executed once. Only then, the test condition is evaluated.
    2 - If the test condition returns true, the set of instructions inside the body of the loop is executed again, and the test condition is evaluated.
    3 - This looping process goes on until the test condition becomes false.
    4 - If the test condition returns false, then the loop terminates.

 Example:-
    The following Program will add numbers until the user enters zero.

    #include <stdio.h>
    int main()
    {
        int n, sum = 0;
        do
        {  
    printf("Enter a number: ");
    scanf("%i", &n);
            sum += n;
        }
        while(n != 0);
        printf("Sum is = %d",sum);

        return 0;
    }

    Output:
    Enter a number: 3                                                                                                             
    Enter a number: 4                                                                                                             
    Enter a number: 8                                                                                                             
    Enter a number: 0                                                                                                             
    Sum is = 15

 As we have mentioned at the beginning of this tutorial, that do-while runs at least once even if the test condition returns false, because the test condition is evaluated after the execution of the instructions in the body of the loop.

WHAT IS THE DIFFERENCE BETWEEN WHILE AND DO-WHILE LOOPS IN C?
 While loop is executed when given test condition return true, whereas, do-while loop is executed for the first time irrespective the test condition is true or false, because the test condition is checked after executing while loop for the first time.

 This difference between while and do-while will be more clear by the following program.  

    main( ) {
    while ( 2 < 1 )   
    printf ( "Hello World \n") ;
    }

 Here, since the condition fails the first time itself, the printf( ) statement will not get executed. Let's now write the same code using a do-while loop.  

    main( ) {  
    do {   
    printf ( "Hello World\n") ;  
    } while ( 2 < 1 ) ;
    }

 In this program, the printf( ) statement would be executed once, since first the body of the loop is executed, and then the test condition is evaluated.
*/
#include <stdio.h>
int main()
{
    nt num, index = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    do
    {
        printf("%d\n", index + 1);
        index = index + 1;
    } while (index < num);
    return 0;
}