//
// Created by dibyajyotidey on 23/8/23.
//
//wap print the reverse of a number.

#include "stdio.h"

void main(){
    int n, r, s = 0;
    printf("Enter the Number: \n");
    scanf("%d", &n);
    while(n>0){
        r = n%10;
        n = n/10;
        s = s*10 + r;
    }
    printf("The reversed number is: %d", s);
}
