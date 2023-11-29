//
// Created by DibyajyotiDey on 11/23/23.
//
#include <stdio.h>
#define PI 3.14
#define Area(r) (PI*(r*r))

void main(){
    float radius = 2.5;
    float area = Area(radius);
    printf("The area is: %f\n", area);
    int radiusInt = 5;
    printf("The area is: %f\n", Area(radiusInt));
}