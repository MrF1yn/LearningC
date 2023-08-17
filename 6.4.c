//
// Created by dibyajyotidey on 17/8/23.
//
//check if a number is +ve, -ve or Zero

#include "stdio.h"

void main(){
    int a;
    char* number;
    printf("Enter a number: \n");
    scanf("%d", &a);
    if(a>0){
        number = "positive";
    } else if (a<0){
        number = "negative";
    } else {
        number = "equal to zero";
    }
    printf("The entered number is %s.", number);
}
