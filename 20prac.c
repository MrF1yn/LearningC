//
// Created by dibyajyotidey on 8/11/23.
//
//Types of pointers:-
//Advantages, Disadvantages and Example
#include<stdio.h>
#include<stdlib.h>
void main(){
    int n, i, sum=0;
    scanf("%d", &n);
    int *ptr;
    ptr = (int*)malloc(n*sizeof(int));
    if(ptr == NULL){
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("Enter elements of array: ");
    for(i = 0; i < n; ++i){
        scanf("%d", ptr+i);
        sum+=*(ptr + i);
    }
    printf("Sum = %d", sum);
    free(ptr);
}