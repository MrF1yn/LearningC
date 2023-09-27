//
// Created by dibyajyotidey on 27/9/23.
//
//wap to extract last char of every word present in a sentence.
#include "stdio.h"
#include "string.h"
void main(){
    char s[1000];
    printf("Enter the sentence: \n");
    scanf("%[^\n]%*c", &s);
    printf("The last character of the words are: \n");
    int n = strlen(s);
    for (int i = 0; i < n; i++){
        if(s[i]==' '||i==n-1) {
            printf("%c ", s[i==n-1?i:i-1]);
        }
    }

}
