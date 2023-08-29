//
// Created by dibyajyotidey on 24/8/23.
//
//check if the number is prime.
#include "stdio.h"
#include "math.h"

void main(){
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    for(int i = 2; i<= sqrt(num); i++){
        if(num%i==0){
            printf("Not a Prime Number!\n");
            return;
        }
    }
    printf("Prime Number!\n");
}
