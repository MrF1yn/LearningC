//
// Created by dibyajyotidey on 4/10/23.
//
//wap to find number of words present, number of characters, number of vowels and number of consonants present in a string.
#include <stdio.h>
#include <stdlib.h>
int num_of_words(char* sen);
int str_len(char[]);
int num_of_vowels(char[]);

void main(){
    char *s = malloc(1000 * sizeof(char));
    printf("Enter the sentence: \n");
    scanf("%[^\n]s", s);
    printf("The number of words present are: %d\n", num_of_words(s));
    printf("The number of characters are: %d\n", str_len(s));
    int vowels = num_of_vowels(s);
    printf("The number of vowels are: %d\n", vowels);
    printf("The number of consonants are: %d\n", str_len(s)-vowels);
}

int num_of_vowels(char s[]){
    int v = 0;
    int n = str_len(s);
    for(int i = 0; i < n; i++){
        if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u')
            v++;
    }
    return v;
}

int str_len(char s[]){
    int i = 0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}

int num_of_words(char* sen){
    int n = str_len(sen);
    int c = 0;
    for(int i = 0; i<n ; i++){
        if(sen[i]==' '||i==n-1){
            c++;
        }
    }
    return c;
}
