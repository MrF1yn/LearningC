//
// Created by dibyajyotidey on 1/11/23.
//
//wap to find sum of all elements present in an array using pointers
#include <stdio.h>
void main(){
    int n;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    int arr[n];
    int s = 0;
    printf("Enter the array elements: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", (arr+i));
    }

    for(int i = 0; i < n; i++){
        s = s + *(arr+i);
    }
    printf("The sum is: %d \n", s);
}