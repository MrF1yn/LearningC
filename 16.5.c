//
// Created by dibyajyotidey on 4/10/23.
//
//wap to convert all characters of a string to an array.
#include <stdio.h>
void to_uppercase(char*);
int str_len(char[]);
void main(){
    char s[1000];
    printf("Enter the sentence: \n");
    scanf("%[^\n]%*c", &s);
    to_uppercase(s);
    printf("The final sentence is: %s\n", s);
}

int str_len(char s[]){
    int i = 0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}

void to_uppercase(char *s){
    int n = str_len(s);
    for(int i = 0; i<n; i++){
        if(s[i]>='a')
            s[i] = s[i]-32;
    }
}

