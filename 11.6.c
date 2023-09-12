//
// Created by dibyajyotidey on 7/9/23.
//
//write a menu driven program. 5x5 matrix
//B -> Border elements
//D -> Diagonal elements
//U -> Upper diagonal elements

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

    char m;
    printf("Enter your choice: \n"
           "B -> Border Elements"
           "D -> Diagonal Elements"
           "U -> Upper Diagonal Elements");
    scanf("%c", &m);
    switch (m) {
        case 'B':
            printf("The Border Elements are: \n");
            for(int i = 0; i<r; i++){
                for(int j = 0; j<c; j++){
                    if(i==0||i==r-1||j==0||j==c-1) {
                        printf("%2d", a[i][j]);
                    }
                }
                printf("\n");
            }
            break;
        case 'D':
            printf("The Diagonal Elements are: \n");
            for(int i = 0; i<r; i++){
                for(int j = 0; j<c; j++){
                    if(i==j) {
                        printf("%2d", a[i][j]);
                    }
                }
                printf("\n");
            }
            break;
        case 'U':
            printf("The Upper Diagonal Elements are: \n");
            for(int i = 0; i<r; i++){
                for(int j = 0; j<c; j++){
                    if(j>=i) {
                        printf("%2d", a[i][j]);
                    }
                }
                printf("\n");
            }
            break;
    }
}
