//
// Created by dibyajyotidey on 16/8/23.
//
// wap to input a five digit number and print the sum of its digits without loop.
#include <stdio.h>
void main(){
    int a,n,s=0;
    printf("Enter a five digit number: \n");
    scanf("%d", &n);

    a = n%10;
    n = n/10;
    s = s + a;

    a = n%10;
    n = n/10;
    s = s + a;

    a = n%10;
    n = n/10;
    s = s + a;

    a = n%10;
    n = n/10;
    s = s + a;

    a = n%10;
    n = n/10;
    s = s + a;

    printf("The sum of the digits is %d", s);
}
