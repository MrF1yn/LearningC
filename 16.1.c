//
// Created by dibyajyotidey on 4/10/23.
//
//wap to find the length of a string.
#include <stdio.h>

int str_len(char[]);
void main(){
    char s[1000];
    printf("Enter the sentence: \n");
    scanf("%[^\n]s", s);
    printf("The length of the string is: %d", str_len(s));
}

int str_len(char s[]){
    int i = 0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}
