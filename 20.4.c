//
// Created by dibyajyotidey on 8/11/23.
//
//give an example of a double pointer to find the sum of all elements present in a matrix
#include <stdio.h>
#include <stdlib.h>
void main(){
    int n;
    printf("Enter the size of matrix: ");
    scanf("%d", &n);
    int **arr = malloc(n*sizeof(int*));
    for(int i = 0; i < n; i++){
        arr[i] = malloc(n*sizeof(int));
    }
    printf("Enter the elements of the matrix: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) {
            sum += arr[i][j];
        }
    }
    printf("The sum of the elements are: %d", sum);

}