//
// Created by dibyajyotidey on 23/8/23.
//
//wap to find the roots of a quadratic equation.

#include "stdio.h"
#include "math.h"

void main(){
    int a,b,c;
    double root, sqr;
    printf("Enter a, b, c respectively: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    double b2 = b*b;
    double ac4 = 4.0*a*c;
    double sub = b2-ac4;
    sqr = sqrt(-1*sub);
    root = (-1*b*(sqr))/(2*a);
    printf("The root of the quadratic equation is: %f", root);
}