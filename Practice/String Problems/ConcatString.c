/*
Author: Ashmit JaiSarita Gupta
Topic: Concatenate String Using and Without Using String Functions.
Date Created: 19-10-2021
*/
#include <stdio.h>
#include <string.h>

int StringLength(char s[])
{
    int length = 0, i;
    while (s[i] != '\0')
    {
        length++;
    }
    return length;
}

void WhoBilli_ConCat(char s1[], char s2[])
{
    int lengthS1 = StringLength(s1), lengthS2 = StringLength(s2), lengthS = lengthS1 + lengthS2 + 1;
    char s[lengthS];
    printf("%d",lengthS1);
}

int main()
{
    WhoBilli_ConCat("Ashmit", "Aryan");
    return 0;
}