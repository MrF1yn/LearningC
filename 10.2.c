//
// Created by dibyajyotidey on 31/8/23.
//
//wap to add or concatenate two strings and print it

#include "stdio.h"
#include "string.h"

void main(){
    char s[100], s1[50];
    printf("Enter string 1: ");
    scanf("%[^\n]%*c", s);
    printf("Enter string 2: ");
    scanf("%[^\n]%*c", s1);
    strcat(s,s1);
    printf("The concatenated string is: \"%s\"", s);
}