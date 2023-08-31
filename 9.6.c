//
// Created by dibyajyotidey on 30/8/23.
//
//wap to search the element in an array

#include "stdio.h"

void main(){
    int n, l;
    printf("Enter the Size of the Array: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements: \n");
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the number to search for: \n");
    scanf("%d", &l);
    for(int i = 0; i<n; i++){
        if(l==a[i]){
            printf("Number: %d is found in Index: %d\n", l, i);
            return;
        }
    }
    printf("Could not find the given number.\n");

}