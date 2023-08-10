//
// Created by dibyajyotidey on 10/8/23.
//
//wap to calculate simple interest.
#include <stdio.h>
void main(){
    float p, r, t;
    printf("Enter the principal, rate and time: \n");
    scanf("%f %f %f", &p, &r, &t);
    printf("The simple interest is %f", p*r*t/100);
}
