/*
Author: Ashmit JaiSarita Gupta
Topic: Command Line Arguments in C.
Date Created: 18-10-2021
*/
/*
Notes / Theory: 

*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    printf("The value of argc is %d.\n", argc);
    for(i = 0; i< argc; i++)
    {
        printf("This argument at index number %d has value of %s .\n", i+1, argv[i]);
    }
    return 0;
}
