//
// Created by dibyajyotidey on 30/8/23.
//
//wap to find the which element is present how many times in an array
#include "stdio.h"

int contains(int s, int* arr){
    for(int i = 0; i < sizeof(arr); i++){
        if(arr[i] == s)return 1;
    }
    return 0;
}

void main() {
    int n;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i<n; i++){
        int s = a[i];

        int c = 0;
        for(int j = 0; j<n; j++){

            if(a[j]==s){
                c++;
            }
        }
        if(contains(s, b)==0) {
            printf("The element %d is present %d times.\n", s, c);
        }
        b[i] = s;
    }
}

