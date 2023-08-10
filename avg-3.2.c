//
// Created by dibyajyotidey on 10/8/23.
//
//wap which will take 5 numbers as input and print the average of those numbers

#include <stdio.h>

void main(){
    int a,b,c,d,e;
    printf("Enter five numbers: \n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("The average is %f", (a+b+c+d+e)/5.0);

}