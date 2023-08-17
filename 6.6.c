//
// Created by dibyajyotidey on 17/8/23.
//
//wap to invert the case of an entered alphabet.

#include "stdio.h"

void main(){
    char c;
    printf("Enter the character: \n");
    scanf("%c", &c);
    if(c<65||c>122||(c>91&&c<97)){
        printf("Invalid Alphabet!\n");
        return;
    }
    if(c>64&&c<91){
      c = c + 32;
    } else{
        c = c - 32;
    }
    printf("The inverted character is: %c\n", c);

}