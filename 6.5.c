//
// Created by dibyajyotidey on 17/8/23.
//
//wap to check if a character is vowel or not using switch case.

#include "stdio.h"

void main(){
    char c;
    printf("Enter the character: \n");
    scanf("%c", &c);
    switch (c) {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("The entered character is a vowel. \n");
            break;
        default:
            printf("The entered character is not a vowel. \n");
    }

}