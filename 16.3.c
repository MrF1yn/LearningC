//
// Created by dibyajyotidey on 4/10/23.
//
//wap to extract subsstring from a given string.
#include <stdio.h>
#include <stdlib.h>
char* substring(int, int, char[]);
void main(){
    char s[1000];
    int start, end;
    printf("Enter the sentence: \n");
    scanf("%[^\n]s", s);
    printf("Enter the start index: ");
    scanf("%d", &start);
    printf("Enter the end index: ");
    scanf("%d", &end);
    printf("\nThe substring is: %s", substring(start, end, s));
}

char* substring(int start, int end, char sen[]){
    char *s = malloc(1000 * sizeof(char));
    int c = 0;
    for(int i = start; i<end; i++){
        s[c++] = sen[i];
    }
    s[c] = '\0';
    return s;
}
