//********************************************************
// fracturing.c
// Author: Marcello Aycock
// Date: 9/5/2024
// Class: COP 3223, Professor Parra
// Purpose: Practice in creating multiple functions and fracturing them
// Input: Points x1, x2, y1, y2
// Output: Height, Width, Perimeter, Area, Distance and 2 points.
// //********************************************************
#include <stdio.h>
#include <math.h>
#define PI 3.14159

double askForUserInput( double distance)
{
    double x1, x2, y1, y2, sumOfSquare;
    
    printf("Please input x1:\n");
    scanf(" %lf", &x1);
    printf("Now provide x2:\n");
    scanf(" %lf", &x2);
    
    printf("How about y1:\n");
    scanf(" %lf", &y1);
    printf("And now y2:\n");
    scanf(" %lf", &y2);
    
    sumOfSquare = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    distance = sqrt(sumOfSquare);
    
    printf("Point #1 entered: x1 = %.3lf \n", x1);
    printf("y1 = %.3lf \n", y1);
    printf("Point #2 entered: x2 = %.3lf \n", x2);
    printf("y2 = %.3lf \n", y2);
    
    return distance;
}

double calculateDistance()
{
    double distance;
    distance = askForUserInput(distance);
    
    printf("The distance between the two points is %.3lf \n", (distance));
    
    return distance;
}
double calculatePerimeter()
{
    double distance, perimeter;
    distance = askForUserInput(distance);
    perimeter = distance*PI;
    printf("The perimeter of the city encompassed by your request is %.3lf \n", perimeter);
    return 5.0;
}

double calculateArea()
{
    double distance, area, radius;
    distance = askForUserInput(distance);
    radius = distance/2;
    area= PI*(radius*radius);
    printf("The area of the city encompassed by your request is %.3lf \n", area);
    return 5.0;
}
double calculateWidth()
{
    double distance;
    distance = askForUserInput(distance);
    printf("The width of the city encompassed by your request is %.3lf \n", (distance));
    return 5.0;
}
double calculateHeight()
{
    double distance;
    distance = askForUserInput(distance);
    printf("The height of the city encompassed by your request is %.3lf \n", (distance));
    return 5.0;
}
int main (void)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}

