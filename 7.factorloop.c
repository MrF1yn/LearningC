//
// Created by dibyajyotidey on 23/8/23.
//
// wap to find the factors of a given number

#include "stdio.h"


void main(){
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    printf("The factors are: \n");
    for(int i = 1; i<n; i++){
        if(n%i==0)
            printf("%d \n", i);
    }
}
