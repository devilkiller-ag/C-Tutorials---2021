/*
Author: Ashmit JaiSarita Gupta
Purpose: Loops In C
Date Created: 05-10-2021
*/
/*
Loops in C:
 In programming, we frequently need to perform an action, of again and again, with variations in the details each time. The mechanism, which meets this need, is the 'loop,' and loops' concept is the tutorial's main focus. The versatility of the computer lies in its ability to perform the set of instructions repeatedly. This involves repeating some code in the program, either a specified number of times or until a particular condition is satisfied. Loop control instructions are used to perform this repetitive operation.

Following are three types of loop in C programming.
    1 - For loop
    2 - While loop
    3 - do-while loop

There are two kinds of loops:-
    1) Entry Controlled loops: In entry controlled loops, the test condition is evaluated before entering the loop body. The For Loop and While Loop are an example of entry controlled loops.

    2) Exit Controlled Loops: In exit controlled loops, the test condition is tested at the end of the loop. The loop body will execute at least once, whether the test condition is true or false. The do-while loop is an example of an exit controlled loop.
 


 
For Loop:-
 A for loop is a repetition control structure that allows us to efficiently write a loop that will execute a specific number of times. The for loop working is as follows:

    1 - The initialization statement is executed only once; in this statement, we initialize a variable to some value.
    2 - In the second step, the test expression is evaluated. Suppose the test expression is evaluated to true. In that case, the for loop keeps running, and the test expression is re-evaluated, but if the test expression is evaluated to false, then the for loop terminates.

 The loop keeps executing until the test expression is false. When the test expression is false, then the loop terminates.

while loop:-
 While loop is called a pre-tested loop. The while loop allows code to be executed multiple times, depending upon a boolean condition that is given as a test expression. While studying for loop, we have seen that the number of iterations is known, whereas while loops are used in situations where we do not know the exact number of iterations of the loop. The while loop execution is terminated on the basis of the Boolean (true or false) test condition.

do-while loop:-
 In do-while loops, the execution is terminated on the basis of the test condition. The main difference between the do-while loop and while loop is that, in the do-while loop, the condition is tested at the end of the loop body, whereas the other two loops are entry controlled loops.

 Note: In do-while loop, the loop body will execute at least once irrespective of the test condition.

What about an Infinite Loop?
 An infinite loop also known as an endless loop occurs when a condition always evaluates to true. Usually, this is considered an error.

Sometimes, while executing a loop, it becomes necessary to jump out of the loop. For this, we will use the break statement or continue statement.

    1) break statement
        When a break statement is encountered inside a loop whether it is a for loop or a while loop, the loop is terminated and the program continues with the statement immediately following the loop.

    2) continue statement
        Using a continue statement in the loop will cause the control to go directly to the test-condition and then it will continue the loop process.
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, index = 1, j = 0;
    printf("Index at starting is%d\n", index);
    printf("Enter a number\n");
    scanf("%d", &num);

    printf("Ascending Order:\n");
    do
    {
        printf("%d\n", index);
        index += 1;
    } while (index <= num);
    printf("After Do While Loop Now the index is %d\n", index);

    printf("Decending Order:\n");
    index = num;
    while (index > 0)
    {
        printf("%d\n", index);
        index -= 1;
    }
    printf("After While Loop Now the index is %d\n", index);

    printf("Ascending Order:\n");
    for (; index < num; index++)
    {
        printf("%d %d\n", index, j);
    }
    printf("After For Loop Now the index is %d\n", index);

    printf("For Try 1:\n");
    int i, k, l, m;
    for (i = 0, k = 0; i < 10, k < 15; i++)
    {
        printf("%d %d\n", i, k);
        k++;
    }

    printf("For Try 2:\n");
    for (l = 0, m = 0; l < 15, m < 10; l++, m++)
    {
        printf("%d %d\n", l, m);
    }
    
    printf("For Try 3 break:\n");
    int f, age;
    for ( f = 0; f < 10; f++)
    {
        printf("Enter Your Ageb: %d \n", f);
        scanf("%d\n", &age);
        if(age == 10)
        {
            break;
        }
        printf("Today was a good day!\n");
    }

    printf("For Try 4 continue:\n");
    int fc, agec;
    for ( fc = 0; fc < 10; fc++)
    {
        printf("Enter Your Agec %d:\n", fc);
        scanf("%d\n", &agec);
        if(agec < 10)
        {
            continue;
        }
        printf("seven-eleven\n");
        printf("seven-eleven\n");
        printf("seven-eleven\n");
        printf("seven-eleven\n");
        printf("shake 'em up, shake 'em up, shake 'em up, shake 'em\n");
    }
    

    return 0;
}
