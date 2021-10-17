/*
Author: Ashmit JaiSarita Gupta
Purpose: Exercise 2 -  Write a program which converts the following units into another.

kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters

Date Created: 06-10-2021
*/
#include <stdio.h>
int main()
{
    char input;
    float kmsToMile = 0.621371;
    float inchesToFoot = 0.0833333;
    float cmsToinches = 0.393701;
    float poundsToKgs = 0.453592;
    float inchesToMeters = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter the inpurt character. q to quit.\n                1. Inches To Foot\n                2. InchesToFoot\n                3. cms To inches\n                4. pound To kgs\n                5. Inches To Meters\n");
        scanf("%c", &input);

        switch (input)
        {
        case 'q':
            printf("Quiting The Program...");
            goto end;
            break;
        case '1':
            printf("Enter quantity in terms of first unit: \n");
            scanf("%f", &first);
            second = kmsToMile * first;
            printf("%f kms is equal to %f miles\n", first, second);
            break;
        case '2':
            printf("Enter quantity in terms of first unit: \n");
            scanf("%f", &first);
            second = inchesToFoot * first;
            printf("%f inches is equal to %f foot \n", first, second);
            break;
        case '3':
            printf("Enter quantity in terms of first unit: \n");
            scanf("%f", &first);
            second = cmsToinches * first;
            printf("%f cms is equal to %f inches. \n", first, second);
            break;
        case '4':
            printf("Enter quantity in terms of first unit: \n");
            scanf("%f", &first);
            second = poundsToKgs * first;
            printf("%f pound is equal to %f kgs. \n", first, second);
            break;
        case '5':
            printf("Enter quantity in terms of first unit: \n");
            scanf("%f", &first);
            second = inchesToMeters * first;
            printf("%f inches is equal to %f meters.\n", first, second);
            break;

        default:
            printf("You Have Choosen an Wrong Option...\n");
            break;
        }
    }
    end:
    return 0;
}
