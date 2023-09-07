//
// Created by dibyajyotidey on 7/9/23.
//
//wap to add two matrices. ask sizes(size should be same, if not regret message.)
#include <stdio.h>
void main(){
    int r1, c1;
    printf("Enter the size of the matrix-1: \n");
    scanf("%d %d", &r1, &c1);
    printf("Enter the elements of the matrix-1: \n");
    int a[r1][c1];
    for(int i = 0; i<r1; i++){
        for(int j = 0; j<c1; j++){
            scanf("%d", &a[i][j]);
        }
    }

    int r2, c2;
    printf("Enter the size of the matrix-2: \n");
    scanf("%d %d", &r2, &c2);
    printf("Enter the elements of the matrix-2: \n");
    int b[r2][c2];
    for(int i = 0; i<r2; i++){
        for(int j = 0; j<c2; j++){
            scanf("%d", &b[i][j]);
        }
    }

    if(r1!=r2||c1!=c2){
        printf("The addition is not possible since the matrix sizes are not the same.\n");
        return;
    }

    printf("The sum is: \n");

    for(int i = 0; i<r1; i++){
        for(int j = 0; j<c1; j++){
            printf("%4d", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

}