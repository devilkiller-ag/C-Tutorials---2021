/*
Author: Ashmit JaiSarita Gupta
Purpose: Concept of String
Date Created: 11-10-2021
*/
#include <stdio.h>

void printStr(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    // char str[] = {'h',  'a', 'r', 'r', 'y', '\0'};
    // char str[] = {'h',  'a', 'r', 'r', 'y'}; //also prints garbage value after the string
    char str[] = "harry";//null terminated character array is string
    // char str[5] = "harry";
    gets(str);
    //using scanf we can take string input but it doesn't takes whitespaces thats why not recommended.
    printf("Using custom function: \n");
    printStr(str);
    printf("Using printf: %s\n", str);
    printf("Using puts: \n");
    puts(str);
    return 0;
}