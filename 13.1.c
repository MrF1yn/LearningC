//
// Created by dibyajyotidey on 14/9/23.
//
//wap using function to find factorial of a int number using function with argument and return type.
#include "stdio.h"
int factorial(int);

void main(){
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Total: %d", factorial(a));
}

int factorial(int a){
    int s = 1;
    printf("The Factorial is: \n");
    for (int i = a; i>1; i--){
        printf(" %d x", i);
        s*=i;
    }
    printf(" 1\n");
    return s;
}