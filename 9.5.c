//
// Created by dibyajyotidey on 30/8/23.
//
//wap to print the largest element in an array;

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
    l = a[0];
    for(int i = 0; i<n; i++){
        if(a[i]>l)
            l = a[i];
    }
    printf("The largest element in the array is: %d", l);

}