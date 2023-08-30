//
// Created by dibyajyotidey on 30/8/23.
//
//wap pyramid
//    *
//   * *
//  * * *
//...5
#include "stdio.h"

void main(){
    for(int i = 0; i<6; i++){
        for(int j = 6; j>i; j--){
            printf(" ");
        }
        for(int k = 0; k<i; k++){
            printf("* ");
        }
        printf("\n");
    }
}