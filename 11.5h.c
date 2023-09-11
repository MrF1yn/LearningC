//
// Created by dibyajyotidey on 7/9/23.
//home assingment
//wap to search an element in a matrix. if present print its border elements along with itself.

#include "stdio.h"
void main(){
    int r, c;
    printf("Enter the size of the matrix: \n");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of the matrix: \n");
    int a[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int s;
    printf("Enter the element to search: \n");
    scanf("%d", &s);
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            if(s==a[i][j]){
                //found
                char* a0 = itoa()
                printf("%s %s %s");
                printf("%s %s %s");
                printf("%s %s %s");
                return;
            }
        }
    }
    printf("Could not find the given element. \n");
}