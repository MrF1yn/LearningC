//
// Created by dibyajyotidey on 24/8/23.
//
//wap to check if the given number is palindrome or not.

#include "stdio.h"
void main(){
    int num, rev = 0, temp, r;
    printf("Enter a number: \n");
    scanf("%d", &num);
    temp = num;
    while(temp!=0){
        r = temp%10;
        rev = rev*10 + r;
        temp/=10;
    }
    if(rev==num){
        printf("Palindrome!\n");
    }else{
        printf("Not a Palindrome!\n");
    }
}
