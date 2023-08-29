//
// Created by dibyajyotidey on 24/8/23.
//
//*
//* *
//* * *
//* * * *
//* * * * *
//left pyramid star pattern

#include "stdio.h"
void main(){
    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}