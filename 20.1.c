//
// Created by dibyajyotidey on 8/11/23.
//
//wap to compute the sum of all elements present in an array using pointer with dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>
void main(){
    int n;
    printf("Enter the number of elements in an array: ");
    scanf("%d", &n);
    int *arr = malloc(n*sizeof(int));
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", (arr+i));
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum+=*(arr+i);
    }
    printf("The sum of the elements are: %d", sum);

}