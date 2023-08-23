//
// Created by dibyajyotidey on 23/8/23.
//
//wap to take 10 different numbers as input and print sum and average.

#include "stdio.h"

void main(){
    int i, s=0;
    float avg=0.0;
    printf("Enter 10 numbers: \n");
    for(int j = 0; j<10; j++){
        scanf("%d", &i);
        s+=i;
    }
    avg = s/10.0;
    printf("The sum is: %d\n", s);
    printf("The average is: %f\n", avg);
}