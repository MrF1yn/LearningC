//
// Created by dibyajyotidey on 7/9/23.
//
//wap to search a number present in the matrix. if present print its location. else regret message.
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

    int s;
    printf("Enter the element to search: \n");
    scanf("%d", &s);

    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            if(a[i][j]==s){
                printf("Element: %d found in Location: %d %d", a[i][j], i, j);
                return;
            }
        }
    }

    printf("Unable to find the given element.\n");
}