//
// Created by dibyajyotidey on 31/8/23.
//
//wap to compare two strings
#include "stdio.h"
#include "string.h"

void main(){
    char s[100], s1[100];
    printf("Enter string 1: ");
    scanf("%[^\n]%*c", s);
    printf("Enter string 2: ");
    scanf("%[^\n]%*c", s1);
    if(strcmp(s, s1)>0){
        printf("String 1 is greater than String 2.\n");
    } else if(strcmp(s, s1)==0){
        printf("String 1 is equal to String 2.\n");
    } else{
        printf("String 1 is smaller than String 2.\n");
    }
}