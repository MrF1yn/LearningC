//
// Created by dibyajyotidey on 1/11/23.
//
//wap to multiply 2 numbers using pointers.
#include <stdio.h>
void main(){
    int a, b;
    printf("Enter 2 numbers: \n");
    scanf("%d %d", &a, &b);
    int *p1 = &a;
    int *p2 = &b;
    printf("The product of the above 2 numbers using pointers is: %d", (*p1)*(*p2));
}