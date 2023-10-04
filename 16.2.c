//
// Created by dibyajyotidey on 4/10/23.
//
//wap to concatenate two string without using library function.
#include <stdio.h>
int str_len(char[]);
void concat(char*, char*);
void main(){
    char s1[1000], s2[500];
    printf("Enter String 1: \n");
    scanf("%[^\n]%*c", &s1);
    printf("Enter String 2: \n");
    scanf("%[^\n]%*c", &s2);
    concat(s1, s2);
    printf("The concatenated string is: %s", s1);

}

void concat(char *s1, char *s2){
    int n1 = str_len(s1);
    int n2 = str_len(s2);
    s1[n1] = ' ';
    int i;
    for(i = 0; i<n2; i++) {
        s1[i+n1+1] = s2[i];
    }
    s1[i+n1+1] = '\0';
}

int str_len(char s[]){
    int i = 0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}