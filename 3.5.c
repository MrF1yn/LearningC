//
// Created by dibyajyotidey on 10/8/23.
//
//wap to calculate temperature in fahrenheit from celsius.

#include <stdio.h>

void main(){
    float fahrenheit;
    printf("Enter the temperature in fahrenheit: \n");
    scanf("%f", &fahrenheit);
    printf("The temperature in celsius is %f", (fahrenheit-32)*5/9);
}
