//
// Created by dibyajyotidey on 13/9/23.
//
//wap to delete an element if found in an array and print before and after deletion of the element. Print regret message if not found.
#include <stdio.h>
void main(){
    int s;
    printf("Enter the size of the array: \n");
    scanf("%d", &s);
    printf("Enter the array elements: \n");
    int a[s];
    int b[s];
    for(int i = 0; i<s; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the element to delete: \n");
    int d;
    scanf("%d", &d);
    int c = 0;
    for(int i = 0; i<s; i++){
        if(d==a[i]){
            continue;
        }
        b[c++] = a[i];
    }
    printf("The initial array is: \n");
    for(int i = 0; i<s; i++){
        printf("%d ", a[i]);
    }
    printf("\nThe final array is: \n");
    for(int i = 0; i<c; i++){
        printf("%d ", b[i]);
    }
}