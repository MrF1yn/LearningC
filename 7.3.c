//
// Created by dibyajyotidey on 23/8/23.
//
//wap menu driven calculator
#include "stdio.h"

void main(){
    int choice, a,b;
    printf("Enter 2 numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Enter 1 for add, 2 for subtract, 3 for multiply, 4 for divide.\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Sum is: %d.", a+b);
            break;
        case 2:
            printf("Subtraction is: %d.", a-b);
            break;
        case 3:
            printf("Multiplication is: %d.", a*b);
            break;
        case 4:
            printf("Division is: %d.", a/b);
            break;
        default:
            printf("Invalid choice\n");


    }
}