//
// Created by dibyajyotidey on 5/10/23.
//
//wap which will ask to enter a name, then print the name like given example.
//Rohit Kumar Singh -> R K Singh
//Vikas biblat shankar sahoo -> V B S Sahu
//Rahul Raj -> R Raj
#include <stdio.h>
#include <string.h>
char to_uppercase(char);
int index_of(char, char*, int);

void main(){
    char s[1000];
    printf("Enter your name: \n");
    scanf("%[^\n]s", s);
    printf("The formatted name is: \n");
    printf("%c ", to_uppercase(s[0]));
    int start_idx = 0;
    int last_idx = 0;
    while (1){
        start_idx = index_of(' ', s, start_idx+1);
        if(start_idx == -1){
            for(int i = last_idx+1; i < strlen(s); i++){
                printf("%c", s[i]);
            }
            return;
        }
        if(last_idx!=0)
            printf(" ");
        printf("%c", to_uppercase(s[start_idx+1]));
        last_idx = start_idx+1;
    }
}
char to_uppercase(char s){
        if(s>='a'&&s<='z')
            return s-32;
    return s;
}
int index_of(char delim, char* sen, int startIndex){
    for(int i = startIndex; i < strlen(sen); i++){
        if(sen[i] == delim)
            return i;
    }
    return -1;
}