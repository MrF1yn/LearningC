//
// Created by dibyajyotidey on 27/9/23.
//
//check if a string is palindrome or not.
#include "stdio.h"
#include "string.h"
void main(){
    char s[1000];
    printf("Enter the word: \n");
    scanf("%s", &s);
    int len = strlen(s);
    for(int i = 0; i<len/2; i++){
        if(s[i]!=s[len-i-1]) {
            printf("The word is not palindrome. \n");
            return;
        }
    }
    printf("The word is palindrome. \n");
}