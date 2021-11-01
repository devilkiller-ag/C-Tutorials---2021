/*
Author: Ashmit JaiSarita Gupta
Purpose:  Reading, Writting, Appending Files in C.
Date Created: 18-10-2021
*/
/*
Notes / Theory: 

*/
#include <stdio.h>
int main()
{
    printf("\n");
    printf("File Name: %s\n", __FILE__);
    printf("Today Date: %s\n", __DATE__);
    printf("Current Time: %s\n", __TIME__);
    printf("\n");

    FILE *ptr = NULL;

    // ***** Reading a file *****
    // char content[50];
    // ptr = fopen("samplefile1.txt", "r");
    // fscanf(ptr, "%s", content);
    // printf("The content of this file is:\n %s", content);

    // // ***** Writing a file *****
    // char String[100] = " ***** This Content is being written by T64-FileIOFunctions.c *****";
    // ptr = fopen("samplefile1.txt", "w");
    // fprintf(ptr, "%s", String);

    // ***** Appending a file *****
    char String[100] = " ***** This Content is being appended by T64-FileIOFunctions.c *****";
    ptr = fopen("samplefile1.txt", "a");
    fprintf(ptr, "\n%s", String);

    fclose(ptr);

    return 0;
}