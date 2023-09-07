//
// Created by dibyajyotidey on 30/8/23.
//
//wap to find the binary equivalent of a decimal number using array;
//string is a combination of characters/string is an array of characters
#include "stdio.h"
void main(){
    int a, r, b[30], i = 0;

    printf("Enter the decimal number: \n");
    scanf("%d", &a);
    while(a>0){
        r = a%2;
        a = a/2;
        b[i++] = r;
    }
    for(i=i-1; i>=0; i--){
        printf("%d", b[i]);
    }

}