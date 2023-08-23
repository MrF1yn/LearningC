//
// Created by dibyajyotidey on 23/8/23.
//
// for loop intro

#include "stdio.h"

void main(){
    int i = 1,sum = 0;
    for(; i<=10; i=i+2){
        sum+=i;
        printf("Sum = %d\n\n", sum);
    }
    sum = 0;
    i = 1;
    printf("WHILE LOOP \n\n");
    while(i<=5){
        sum = sum + i;
        i++;
    }
    printf("Sum = %d\n\n", sum);
    printf("DO WHILE LOOP \n\n");
    sum = 0;
    i = 1;
    do{
        sum = sum+i;
        i++;
    } while (i<=5);
    printf("Sum = %d\n", sum);
}
