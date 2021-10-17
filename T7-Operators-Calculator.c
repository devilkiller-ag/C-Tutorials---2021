/*
Author: Ashmit JaiSarita Gupta
Purpose: To Understand Operators In C
Date Created: 04-10-2021
*/
/*
Notes / Theory: 
“Special symbols that are used to perform actions or operations are known as operators.”

 For example, the symbol plus (+) is used to perform addition so it is an operator.

We will discuss all sorts of operator here. Let’s start with the simpler one’s i.e. Arithmetic.
--------------------------------------------------------------
--------------------------------------------------------------
Arithmetic operators:-
 Arithmetic operators are used to perform mathematical operations such as addition, subtraction etc. Few of the simple arithmetic operators are :

    1: +
        Addition

    2: −
        Subtraction

    3: *
        Multiplication

    4: /
        Division

    5: %
        Modulus

 We all know their purpose and how they are used in simple mathematics. Their purpose and functionality are the same, let’s see their implementation in C.

    int a = 2;
    int b = 3;
    printf("a + b = %d\n", a+b);

 The output will be:
    a + b = 5
--------------------------------------------------------------
Relational Operators:-
 sRelational operators are used for the comparison between two or more numbers. Same as Java, C also has six relational operators and their return value is in Boolean i.e. either True or False (1 or 0).

    1: > 
        Greater than

    2: < 
        Less than

    3: >=
        Greater than or equal to

    4: <=
        Less than or equal to

    5: ==
        Is equal to

    6: !=
        Is not equal to

 Let’s go to VS Code now:

    int a = 2;
    int b = 2;
    printf("a == b = %d\n", a==b);
 
 The output is 1 i.e. True.

 If we change the value of a or b the value will be false or 0.

    int a = 1;
    int b = 2;
    printf("a == b = %d\n", a==b);
 
 The output is 0 i.e. False.
--------------------------------------------------------------
Logical Operators:-
 There are three logical operators i.e. AND, OR and NOT. They can be used to compare Boolean values but are mostly used to compare conditions to see whether they are satisfying or not. 

  1 - AND: it returns true when both operators are true or 1.

  2 - OR: it returns true when either operator is true or 1.

  3 - Not: it is used to reverse the logical state of the operand.

    1: &&
        AND operator

    2: ||
        OR Operator

    3: !
        NOT Operator

 Example:

    int a = 1;
    int b = 0;
    printf("a or b = %d\n", a||b);

 Here the output is:

    a or b = 1

 Let’s see what happens if both the values are zero

    int a = 0;
    int b = 0;
    printf("a or b = %d\n", a||b);

 the output is:

    a or b = 0
--------------------------------------------------------------
Bitwise Operators:-
 To perform bit level operations, bitwise operators are used. They convert the values we provide to them in binary format and then compare them to provide us the results.

    1: &
        Bitwise AND

    2: |
        Bitwise OR

    3: ^
        Bitwise XOR

    4: ~
    Bitwise complement

    5: << 
        Shift left

    6: >> 
        Shift right
--------------------------------------------------------------
Assignment Operators:-
 Assignment operators are used to assign values. They are going to be used in each and every one of our program.

    int a = 0;
    int b = 1;

 Equal to (=) is the assignment operator here, assigning 0 to a and 1 to b.

    1: =
        Assigns values from right side operands to left side operand

    2: +=
        It adds the right operand to the left operand and assign the result to the left operand.

    3: -=
        It subtracts the right operand from the left operand and assigns the result to the left operand.

    4: *=
        It multiplies the right operand with the left operand and assigns the result to the left operand.

    5: /=
        It divides the left operand with the right operand and assigns the result to the left operand.
--------------------------------------------------------------
--------------------------------------------------------------
Conclusion:
 These are few of the important operators that you should know about before starting actual programming. There are also many other operators such as &, % or *(pointer). I will let you know their details when working with them but the few defined above will be used frequently so knowledge about them is important. You do not have to remember them all as you can open the Tutorial any time again when required.
*/
#include <stdio.h>
int main()
{
    /* code */
    int option = 0, a = 0, b = 0;
    do
    {
        /* code */
        printf("\nSelect the operation you want to perform on two integer numbers: \n");
        printf("Press 1 for Sum.\n");
        printf("Press 2 for Sub.\n");
        printf("Press 3 for Pro.\n");
        printf("Press 4 for Div.\n");
        printf("Press 5 for Mod.\n");
        printf("Press 6 for Pow.\n");
        printf("Press 7 to run the program once again.\n");
        printf("Press 8 to exit program.\n");
        scanf("%d", &option);
        printf("You have choosen option: %d \n", &option);

        switch (option)
        {
        case 1:
            printf("Enter number a: \n");
            scanf("%d", &a);
            printf("Enter number b: \n");
            scanf("%d", &b);
            printf("%d", sum(a, b), "\n");
            break;
        case 2:
            printf("Enter number a: \n");
            scanf("%d", &a);
            printf("Enter number b: \n");
            scanf("%d", &b);
            printf("%d", sub(a, b), "\n");
            break;
        case 3:
            printf("Enter number a: \n");
            scanf("%d", &a);
            printf("Enter number b: \n");
            scanf("%d", &b);
            printf("%d", pro(a, b), "\n");
            break;
        case 4:
            printf("Enter number a: \n");
            scanf("%d", &a);
            printf("Enter number b: \n");
            scanf("%d", &b);
            printf("%d", div(a, b), "\n");
            break;
        case 5:
            printf("Enter number a: \n");
            scanf("%d", &a);
            printf("Enter number b: \n");
            scanf("%d", &b);
            printf("%d", mod(a, b), "\n");
            break;
        case 6:
            printf("Enter number a: \n");
            scanf("%d", &a);
            printf("Enter number b: \n");
            scanf("%d", &b);
            printf("%d", powe(a, b), "\n");
            break;
        case 7:
            option = 0;
            break;
        case 8:
            option = 8;
            break;

        default:
            printf("Select Valid Option!\n");
            option = 0;
            break;
        }

    } while (option != 8);

    return 0;
}
int sum(int a, int b)
{
    return a + b;
}
int pro(int a, int b)
{
    return a * b;
}
int sub(int a, int b)
{
    return a - b;
}
int div(int a, int b)
{
    return a / b;
}
int mod(int a, int b)
{
    return a % b;
}
int powe(int a, int b)
{
    return a ^ b;
}
