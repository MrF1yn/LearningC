//
// Created by dibyajyotidey on 17/8/23.
// wap to find the greater number between 3 numbers.

#include <stdio.h>

void main(){
    int x,y,z;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d", &x, &y, &z);
    if(x>y){
        if(x>z){
            printf("%d is the greatest number", x);
        }else{
            printf("%d is the greatest number", z);
        }
    }
}