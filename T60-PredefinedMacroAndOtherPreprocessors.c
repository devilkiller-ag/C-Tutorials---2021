/*
Author: Ashmit JaiSarita Gupta
Purpose: Predefined Macros And Other Pre-Processors.
Date Created: 18-10-2021
*/
/*
Notes / Theory: 

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("File name is %s\n", __FILE__);
    printf("Today is %s\n", __DATE__);
    printf("Current Time is %s\n", __TIME__);
    printf("Current line is %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);
    return 0;
}