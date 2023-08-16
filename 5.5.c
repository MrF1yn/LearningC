//
// Created by dibyajyotidey on 16/8/23.
//
//wap to find smallest number among three numbers using ternary operator.
#include <stdio.h>
void main(){
    int a, b, c;
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("The smallest number is %d", a<b?(a<c?a:c):(b<c?b:c));
}
