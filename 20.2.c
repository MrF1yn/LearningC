//
// Created by dibyajyotidey on 8/11/23.
//
//wap to find the largest element in an array using dynamic memory allocation.
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
    int l = *arr;
    for(int i = 0; i < n; i++){
        if(*(arr+i)>l)
            l = *(arr+i);
    }
    printf("The largest element in the array is: %d", l);

}
