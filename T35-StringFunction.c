/*
Author: Ashmit JaiSarita Gupta
Purpose: Sting Function
Date Created: 11-10-2021
*/
#include <stdio.h>
#include <string.h>

void friend()
{
    char s1[20], s2[20];
    printf("Enter first name: \n");
    gets(s1);
    printf("Enter second name: \n");
    gets(s2);
    // puts(strcat(s1, s2));
    printf("%s is a friend %s.", s1, s2);
}

int main()
{
    char s1[] = "Harry", s2[] = "Ravi", s3[54];
    // printf("The strcmp for s1, s2 returned: %d\n", strcmp(s1, s2));
    // // s3 = strcat(s1, s2); //ERROR: As s3 is an array but s1 and s2 are in form of string. Covert or write s1 and s2 in form of string array.
    // strcpy(s3, strcat(s1, s2));
    // puts(s3);
    // // puts(strcat(s1, s2));//adds s2 to s1 and stores it in s1
    // puts(s1);
    // printf("The length of s1 is %d\n", strlen(s1));
    // printf("The length of s1 is %d\n", strlen(s2));
    // printf("The reversed string s1 is: ");
    // puts(strrev(s1));
    // friend();
    printf("%d\n",strncmp("Ramesh", "Rakesh", 2));
    printf("%d\n",strcasecmp("Ravan", "ravan"));
    printf("%d\n",strncasecmp("Ravan", "ram", 3));
    puts(strncat(s1, s2, 3));
    /* strchr() and strrchr() and strstr() and strnstr() and strncpy() ---> watch tutorial */
    return 0;
}