/*
Author: Ashmit JaiSarita Gupta
Topic: To Compare two string using and without using string functions.
Date Created: 19-10-2021
*/
#include <stdio.h>
#include <string.h>

int stringLength(char s[]) // Future Ashmit I know strlen() fuction of string.h but I am writing this manual funtion to train you! AG Loves AR! AR Loves AG!
{
    int length = 0, i;
    for (i = 0; s[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

void compareString(char s1[], char s2[])
{
    if (strcmp(s1, s2) == 0)
    {
        printf("%s and %s are same.\n", s1, s2);
    }
    else
    {
        printf("%s and %s are not same.\n", s1, s2);
    }
}

void compareStringIgnoringCase(char s1[], char s2[])
{
    if (strcasecmp(s1, s2) == 0)
    {
        printf("%s and %s are same.\n", s1, s2);
    }
    else
    {
        printf("%s and %s are not same.\n", s1, s2);
    }
}

void compareStringWithoutInbuiltFunction(char s1[], char s2[])
{
    int lengthS1 =stringLength(s1), lengthS2 =stringLength(s2), i, same = 0; // same = 0 --> assue both strings are same

    if (lengthS1 == lengthS2) // If length of both strings are same then their is possibility for them to be same otherwise they never can be same.
    {
        for (i = 0; i < lengthS1; i++) // lengthS1 = lengthS2
        {
            if (s1[i] != s2[i])
            {
                same = -1; // if any one of the character at same index is diffrent then string are not same.
            }
        }
    }
    else
    {
        same = -1; //if length of both strings are not same then they can't be equal.
    }

    if (same == 0)
    {
        printf("%s and %s are same.\n", s1, s2);
    }
    else if (same == -1)
    {
        printf("%s and %s are not same.\n", s1, s2);
    }
    else
    {
        printf("Error in logic of function void compareStringWithoutInbuiltFunction(char s1[], char s2[]) of the program!\n");
    }
}

int main()
{
    // compareString("Ashmit", "ashmit");
    compareStringWithoutInbuiltFunction("Ashmit", "Aryan");
    compareStringWithoutInbuiltFunction("Ashmit", "ashmit");
    compareStringWithoutInbuiltFunction("Ashmit", "Ashmit");
    compareStringWithoutInbuiltFunction("Ashmit is a good boy.", "Ashmit is a good boy.");
    compareStringWithoutInbuiltFunction("Ashmit is good student.", "Rohani is good student.");
    return 0;
}