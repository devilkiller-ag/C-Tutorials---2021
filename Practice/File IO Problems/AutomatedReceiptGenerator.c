/*
Author: Ashmit JaiSarita Gupta
Topic: Automated Receipt Generator
Date Created: 
*/
/*
Problem Statement: 
Suppose you have a template letter.txt. You have to fill in values to a template. Letter.txt looks something like this:

Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}. Please visit our outlet {{outlet}} for any kind of problems. We plan to serve you again soon.

You have to write a program that will automatically fill the template.For this, read this file and replace these values:

{{name}} - Harry 

{{item}} - Table Fan 

{{outlet}} - Ram Laxmi fan outlet

Use file functions in c to accomplish the same.

This exercise is a part of C programming tutorials. If you have not watched my C tutorial, then click on the link and start learning! 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceWord(const char *str, const char *oldWord, const char *newWord)
{
    char *resultString;
    int i, count = 0;
    int oldWordlength = strlen(oldWord);
    int newWordlength = strlen(newWord);

    //Lets count number of times oldWord ocurs in the string
    for (i = 0; i != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;

            //Jummp over this word
            i = i + oldWordlength - 1; //-1 because for loop automatically increments i by 1 (i++).
        }
    }

    // Making a new string to fit in the replaced woeds
    resultString = (char *)malloc(i + count * (newWordlength - oldWordlength) + 1); //+1 to make space for null character at the last of new string.

    i=0;
    while (*str) //till null character is not encountered in str
    {
        //compare these substring with result
        if(strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordlength;
            str += oldWordlength;
        }
        else
        {
            resultString[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultString[i] = '\0';
    return resultString;
}

int main()
{
    printf("\n");
    printf("File Name: %s\n", __FILE__);
    printf("Today Date: %s\n", __DATE__);
    printf("Current Time: %s\n", __TIME__);
    printf("\n");

    FILE *ptr = NULL;
    FILE *newPtr = NULL;
    char str[200];
    ptr = fopen("LetterTemplate.txt", "r");
    newPtr = fopen("GeneratedLetter.txt", "w");
    fgets(str, 200, ptr);
    printf("The letter bill template was: \n\n%s\n\n", str);

    //Call the replaceWord function and generate newStr
    char *newStr = str;

    newStr = replaceWord(str, "{{item}}", "Table Fan");
    newStr = replaceWord(str, "{{outlet}}", "Ram Laxmi fan outlet");
    newStr = replaceWord(str, "{{name}}", "Ashmit");

    printf("The new customized letter bill template is: \n\n%s\n\n", newStr);
    fprintf(newPtr, "%s", newStr);

    fclose(ptr);
    fclose(newPtr);

    return 0;
}