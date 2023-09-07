//
// Created by dibyajyotidey on 7/9/23.
//
//wap to provide the value for the matrix and print the matrix on screen.

#include <stdio.h>
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

    printf("The elements of the matrix are: \n");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}