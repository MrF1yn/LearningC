//
// Created by dibyajyotidey on 27/9/23.
//
//wap to test whether a number is present in a fibonacci series or not (Using function)
#include "stdio.h"
int is_present_in_fibonacci(int);
void main(){
    int n;
    printf("Enter the number to search for in fibonacci series: ");
    scanf("%d", &n);
    if(is_present_in_fibonacci(n) == -1){
        printf("\nThe given number is not in a fibonacci series.\n");
    } else{
        printf("\nThe given number is present in the %dth place in the fibonacci series.\n", is_present_in_fibonacci(n));
    }
}
int is_present_in_fibonacci(int a){
    int n1 = 1, n2 = 1, n3 = 0;
    for(int i=2;i<1000;++i)
    {
        n3=n1+n2;
        if(a==n3){
            return i-1;
        }
        n1=n2;
        n2=n3;
    }
    return -1;
}