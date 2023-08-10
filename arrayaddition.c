//
// Created by dibyajyotidey on 10/8/23.
//
//
// Created by dibyajyotidey on 10/8/23.
//
#include <stdio.h>

void main(){
    int mode;
    printf("Enter the addition mode: 1 for array mode, 2 for normal mode\n");
    scanf("%d", &mode);

    switch (mode) {
        case 1:
            printf("Array mode\n");
            break;
        case 2:{
            int a , b;
            printf("Enter two numbers: \n");
            scanf("%d %d", &a, &b);
            printf("The sum is %d", a+b);
            break;
        }
    }
}

int* add(int a[], int b[]){


    return sum;
}