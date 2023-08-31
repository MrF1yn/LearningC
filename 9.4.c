//
// Created by dibyajyotidey on 30/8/23.
//
//  1  2  3  4  5
//     6  7  8  9
//       10 11 12
//          13 14
//             15

#include "stdio.h"

void main(){
    int l = 1;
    for(int i = 0; i<6; i++){
        for(int j = 0; j<i; j++) {
            printf("   ");
        }
        for(int k = 5; k>i; k--){
            if(l>9){
                printf(" %d", l++);
                continue;
            }
            printf("  %d", l++);
        }
        printf("\n");
    }
}
