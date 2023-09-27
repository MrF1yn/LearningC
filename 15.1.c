//
// Created by dibyajyotidey on 27/9/23.
//
//wap to check a number is prime or not using user defined function.
#include "stdio.h"
int prime(int);
void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if(prime(n) == 0)
        printf("\nThe entered number is a prime number.\n");
    else
        printf("\nThe entered number is not a prime number.\n");

}

int prime(int a){
    for(int i = 2; i<a; i++){
        if(a%i==0)return 1;
    }
    return 0;
}




