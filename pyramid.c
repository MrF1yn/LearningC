//
// Created by dibyajyotidey on 9/8/23.
//
#include <stdio.h>

void main(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5-i; j++){
            printf(" ");
        }
        for(int k = 0; k < i+1; k++){
            printf("* ");
        }
        printf("\n");
    }

    //robot
    printf("    |------|\n");
    printf("    |      |\n");
    printf("    $ @  @ $\n");
    printf("    |  ||  |\n");
    printf("    | <  > |\n");
    printf("    |______|\n");
    printf("     __||__\n");
    printf("   @ |    |   $$\n");
    printf("  \\__|    |__/\n");
    printf("     |    |\n");
    printf("     \\____/\n");
    printf("       ||\n");
    printf("     --  --\n");


}


