//
// Created by dibyajyotidey on 1/11/23.
//
//wap to swap 2 numbers using call by reference(print before swap, during swap, after swap)
#include <stdio.h>

void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

void main(){
    int a, b;
    printf("Enter 2 numbers: \n");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("The swapped values are: %d %d", a , b);
}
