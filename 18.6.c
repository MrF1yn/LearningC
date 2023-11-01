//
// Created by dibyajyotidey on 1/11/23.
//
//wap to find second largest element present in an array using pointer
#include <stdio.h>
void main(){
    int n;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for(int i = 0; i < n; i++ ){
        scanf("%d", (arr+i));
    }
    int l = arr[0];
    int sl = arr[0];
    int *pl = &l;
    int *psl = &sl;
    for(int i = 0; i < n; i++ ){
        if(*(arr+i)>*pl){
            *psl = *pl;
            *pl = *(arr+i);
        }
    }
    printf("The second largest element in the array is: %d", *psl);
}