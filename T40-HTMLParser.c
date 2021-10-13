/*
Author: Ashmit JaiSarita Gupta
Purpose: To create a html parser whcih parses tag and trims it.
Date Created: 11-10-2021
*/
#include <stdio.h>
#include <string.h>

void parser(char *string)
{
    //Remove tags
    int in = 0; //variable to track weather we are inside the tag
    int index = 0, i;
    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    //Remove the trailing spaces from begining
    while (string[0] == ' ')
    {
        //shift the string to left
        for (i = 0; i < strlen(string); i++)
        {
            string[i] = string[i+1];
        }
    }
    //Remove the trailing spaces from end
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    char string[] = "<h1>      This is Heading.  </h>";
    printf("The Original string is ~~~~%s~~~~\n", string);
    parser(string);
    printf("The Original parsed string is ~~~~%s~~~~\n", string);
    return 0;
}

/*
Input:
<h> This is a heading. </h>
Output:
This is a heading.
*/
/*
Input:
<span>       This is a heading.  </span>
Output:
This is a heading.
*/
/*
Input:
<harry>   This is a heading.  </span>
Output:
This is a heading.
*/
