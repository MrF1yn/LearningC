//
// Created by dibyajyotidey on 27/9/23.
//
//wap find the sum of the digit of a number upto 1 digit number. 7+8+9+9->3+3->6 using function
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
    while(n>0){
        int r = n%10;
        n = n/10;
        s = s+r; 
    }
    return s;
}

int sum(int n){
    int s = sum_of_digits(n);
    while(s>9){
        s = sum_of_digits(s);
    }
    return s;
}
