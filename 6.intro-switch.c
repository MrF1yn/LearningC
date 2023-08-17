//
// Created by dibyajyotidey on 17/8/23.
//
//switch-case grade remarks

#include "stdio.h"

void main(){
    char grade;
    printf("Enter your Grade: \n");
    scanf("%c", &grade);
    switch (grade) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Well done\n");
            break;
        case 'C':
            printf("You passed\n");
            break;
        case 'D':
            printf("Better try again\n");
            break;
        default:
            printf("Invalid Grade\n");

    }
    printf("Your Grade is %c", grade);
}
