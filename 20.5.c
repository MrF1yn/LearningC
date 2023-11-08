//
// Created by dibyajyotidey on 8/11/23.
//
//write  a program to print atleast 5 names using dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>
void main(){
    char **arr = malloc(5*sizeof(char*));
    for(int i = 0; i < 5; i++){
        arr[i] = malloc(100*sizeof(char));
    }
    printf("Enter the names: \n");
    for(int i = 0; i < 5; i++){
        scanf("%s", arr[i]);
    }
    printf("The names are: \n");
    for(int i = 0; i < 5; i++){
        printf("%s\n", arr[i]);
    }

}