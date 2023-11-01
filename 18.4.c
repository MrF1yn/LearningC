//
// Created by dibyajyotidey on 1/11/23.
//
//wap to print reverse of a string using pointers
#include <stdio.h>
#include <string.h>
void main(){
    char s[1000];
    printf("Enter the string: \n");
    scanf("%[^\n]s", s);
    printf("The reverse is: \n");
    int n = strlen(s);
    for(int i = n-1; i>-1; i--){
        printf("%c", *(s+i));
    }
}