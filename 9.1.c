//
// Created by dibyajyotidey on 30/8/23.
//
//1
//12
//123
//1234
//12345

#include "stdio.h"

void main(){
    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}