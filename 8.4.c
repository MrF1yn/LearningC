//
// Created by dibyajyotidey on 24/8/23.
//
//wap to check if the given number is perfect number or not. 6 = 1+2+3

#include "stdio.h"
void main(){
    int num, sum = 0;
    printf("Enter a number: \n");
    scanf("%d", &num);
    for(int i = 1; i<num; i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        printf("Perfect Number!\n");
    }else{
        printf("Not a Perfect Number!\n");
    }
}