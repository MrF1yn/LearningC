//
// Created by dibyajyotidey on 23/8/23.
//
// wap to print the sum of digits

#include "stdio.h"

void main(){
    int i, n, sum = 0;
    printf("Enter the number: \n");
    scanf("%d", &i);
    while(i>0){
        n = i%10;
        i = i/10;
        sum+=n;
    }
    printf("The sum is: %d. \n", sum);
}
