/*
Author: Ashmit JaiSarita Gupta
Topic: All functions and modes of File I/O.
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
    
    char c, String[100];
    FILE *ptr = NULL;
    ptr = fopen("samplefile1.txt", "r");
    // ptr = fopen("samplefile1.txt", "w");
    // ptr = fopen("samplefile1.txt", "a");
    // ptr = fopen("samplefile1.txt", "r+");
    // ptr = fopen("samplefile1.txt", "w+");
    // ptr = fopen("samplefile1.txt", "a+");
    c = fgetc(ptr);
    printf("The Character I read was %c.\n", c);
    c = fgetc(ptr);
    printf("The Character I read was %c.\n", c);

    fgets(String, 5, ptr);
    printf("The String is %s.\n", String);

    // fputc('o', ptr);
    // fputs("This is String.", ptr);

    fclose(ptr);

    return 0;
}