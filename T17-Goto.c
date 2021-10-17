/*
Author: Ashmit JaiSarita Gupta
Purpose: Goto Statement In C
Date Created: 5-10-2021
*/
/*
Notes / Theory: 
A goto statement in C programming language provides an unconditional jump from the ‘goto’ to a labeled statement in the same function.

NOTE − Use of goto statements is highly discouraged or avoided in any programming language because it makes difficult to trace the control flow of a program to fellow programmers, making the program hard to understand and hard to modify or manipulate. Any program which uses goto can be modified to avoid goto statements.

1 - These are also called ‘Jump Statement’.
2 - It is used to transfer the control to a predefined label.
3 - It’s use is avoided since it causes confusion for the fellow programmers in understanding code.
4 - goto statement is preferable when we need to break multiple loops using a single statement at the same time.

Syntax for goto statement:-

    #include <stdio.h> 
    int main() 
    { 
        int x, i, j; 
        for (i = 0;i <5; i++)
        { 
            printf("\nHey Guys\n\n"); 
            for (j = ;j < 3; j++) 
            { 
                printf("Type any No. & To Exit : Press 1\n"); 
                scanf("%d", &x); 
                if (x == 1) 
                {
                    goto end; // This goto will transfer the control to end: i.e. out of both loop 
                } 
            }	 
        } 
        end: 
        printf("\'For\' loops are skipped as you pressed 1"); 
        return 0; 
    }

That's all about goto statement in C Language.


*/
#include <stdio.h>
int main()
{
    // label:
    //     printf("we are inside label");
    //     goto end;
    // printf("Hello World\n");
    // goto label;
    // end:
    //     printf("we are at end");
    int num, i, j;
    for (i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (j = 0; j < 8; j++)
        {
            printf("Enter the number. enter 0 to exit\n");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }
end:
    return 0;
}