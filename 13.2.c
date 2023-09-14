//
// Created by dibyajyotidey on 14/9/23.
//
//wap to find sum of digit of a number(int) using function
#include "stdio.h"
int sum_of_digits(int);

void main(){
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("The sum of its digits are: %d", sum_of_digits(a));
}

int sum_of_digits(int a){
    int s = 0, r;
    while (a>0){
        r = a%10;
        a = a/10;
        s = s+r;
    }
    return s;
}