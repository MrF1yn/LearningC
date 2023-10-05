//
// Created by dibyajyotidey on 5/10/23.
//
//wap to search a no. present in an 1d array and fing its location using break statement
#include <stdio.h>
void main(){
    int n, s;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements: \n");
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the element to search: \n");
    scanf("%d", &s);
    int i = 0;
    int f = 0;
    for(; i<n; i++){
        if(a[i]==s){
            f = 1;
            break;
        }
    }
    if(f==0)printf("The given element could not be found.\n");
    else
        printf("The given element is found at position: %d", i);
}