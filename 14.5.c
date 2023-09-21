//
// Created by dibyajyotidey on 21/9/23.
//
//wap using recursion to find sum of digits of a number
#include "stdio.h"

#include "stdio.h"

int sum_of_digits(int, int);

void main(){
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    printf("The sum of digits of the number is: %d", sum_of_digits(0, n));
}

int sum_of_digits(int r, int n){
    if(n<=0)
        return 0;
    r = n%10;
    n = n/10;
    return r+ sum_of_digits(r,n);

}