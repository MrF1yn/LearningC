//
// Created by dibyajyotidey on 30/8/23.
//
//ABCDE
//ABCD
//ABC
//AB
//A
#include "stdio.h"

void main(){
    char c = 'A';
    for(int i = 0; i<6; i++){
        for(int j = 5; j>i; j--){
            printf("%c",c);
            c++;
        }
        c='A';
        printf("\n");
    }
}
