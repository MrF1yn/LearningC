//
// Created by dibyajyotidey on 5/10/23.
//
//wap to find sum of digits of your roll number into a single digit no. using goto statement.
#include "stdio.h"
int sum(int);
void main(){
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    printf("The sum of digits till single digit is: %d\n", sum(n));
}

int sum_of_digits(int n){
    int s = 0;
    LOOP: {
        if(n<=0) goto OUT;
        int r = n%10;
        n = n/10;
        s = s+r;
        goto LOOP;
    }
    OUT:
    return s;
}

int sum(int n){
    int s = sum_of_digits(n);
    LOOP:{
        if(s<=9)goto OUT;
        s = sum_of_digits(s);
        goto LOOP;
    }
    OUT:
    return s;
}
