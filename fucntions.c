//
// Created by dibyajyotidey on 14/9/23.
//
//function prototype
//
#include "stdio.h"
int sum(int, int);
void print();


void main(){
   int a, b;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    printf("The sum is: %d", sum(a,b));//actual arguments
    print();
}

int sum(int x, int y){//formal arguments
    return x+y;
}

void print(){
    printf("\nDibyajyoti Dey\n");
}