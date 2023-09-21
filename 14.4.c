//
// Created by dibyajyotidey on 21/9/23.
//
//wap to find factorial of a number using recursion.
#include "stdio.h"

int factorial(int);

void main(){
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    printf("The factorial of the number is: %d", factorial(n));
}

int factorial(int i){
    if(i>0)
        return i + factorial(i-1);
    return 1;
}