//
// Created by dibyajyotidey on 16/8/23.
//
#include <stdio.h>

//wap to find the greater number using ternary operator.

void main(){
    int a,b,c;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    c = a>b?a:b;
    printf("The greater number is %d", c);
}