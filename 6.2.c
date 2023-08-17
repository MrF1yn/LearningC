//
// Created by dibyajyotidey on 17/8/23.
//
//wap to find the greatest number among 3 numbers using if else statement.

#include "stdio.h"

void main(){
    int a,b,c;
    printf("Enter 3 numbers: \n");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b){
        if(a>c){
            printf("%d is the greatest number", a);
        }else{
            printf("%d is the greatest number", c);
        }
    }
}