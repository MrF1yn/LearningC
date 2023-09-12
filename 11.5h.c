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
    printf("Searching for the element...\n");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            if(s==a[i][j]){
                //found
                printf("Element: %d Found! Showing it along with surrounding elements:\n", s);
                for(int k = i-1; k<i+2; k++){
                    for(int l = j-1; l<j+2; l++){
                            if(k<0 || l<0 || k>=r || l>=c){
                                printf("  ");
                                continue;
                            }
                            printf("%d ", a[k][l]);
                    }
                    printf("\n");
                }
                return;

            }
        }
    }
    printf("Could not find the given element. \n");
}