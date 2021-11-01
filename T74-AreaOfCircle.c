/*
Author: Ashmit JaiSarita Gupta
Topic: The task you have to perform is to write a program that will calculate the “Area of the Circle Using Function Pointers in C.”
Date Created: 18-10-2021
*/
/*
Question: 
Problem Statement:-
You have to take four points(x1,y1,x2,y2) from the user using scanf(). To find the distance between these points, you will use the Euclidean distance formula. 

Following is the task:

Write a function that will calculate the Euclidean distance.
    int Edistance(int x1, int y1, int x2, int y2)
    {
    return 0;
    }
This function will return an integer value.

Write a function that tells the area of the circle whose radius is equal to the distance between x1,y1,x2,y2, and pass function pointer as an argument.
    float areaOfCircle(int x1, int y1, int x2, int y2, <function pointer here> ){
    //return area of circle
    }
*/
#include <stdio.h>
#include <math.h>
#define PI 3.14

float Edistance(int x1, int y1, int x2, int y2)
{
    return (sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));
}

float areaOfCircle(int x1, int y1, int x2, int y2, float (*fdistance)(int, int, int, int))
{
    float area = PI * pow(distance(x1, y1, x2, y2), 2);
}

int main()
{
    // printf("%f", Edistance(1, 1, 2, 2)); //testing the functions
    // float (*funcPtr)(int, int, int, int); // Declaring a function pointer - Space is not allocated

    // funcPtr = Edistance; //Creating a function pointer - Space is allocated
    printf("The Area of Circle is: %f\n", areaOfCircle(1, 1, 2, 2, Edistance));
    return 0;
}