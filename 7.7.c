//
// Created by dibyajyotidey on 23/8/23.
//
//wap find factorial of a number
#include "stdio.h"

void main(){
    int i, s=1;
    printf("Enter the number: \n");
    scanf("%d", &i);
    for(int j = 1; j<=i; j++){
        s = s*j;
    }
    printf("The factorial is: %d", s);
}