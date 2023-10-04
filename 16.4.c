//
// Created by dibyajyotidey on 4/10/23.
//
//wap to find number of words present, number of characters, number of vowels and number of consonants present in a string.
#include <stdio.h>
#include <stdlib.h>
char** split_words(char, char*, int*);
int str_len(char[]);
int num_of_vowels(char[]);

void main(){
    char s[1000];
    printf("Enter the sentence: \n");
    scanf("%[^\n]%*c", &s);
    int num_of_words = 0;
    char** words = split_words(' ', s, &num_of_words);
    printf("The number of words present are: %d\n", num_of_words);
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

char** split_words(char delim, char* sen, int *num_of_words){
    char **s = (char **)malloc(1000 * sizeof(char *));
    int row;
    // for each row allocate Cols ints
    for (row = 0; row < 1000; row++) {
        s[row] = (char *)malloc(1000 * sizeof(char ));
    }
    int n = str_len(sen);
    int c = 0;
    for(int i = 0; i<n ; i++){
        if(sen[i]==delim||i==n-1){
            if(i==n-1)
                s[*num_of_words][c++] = sen[i];
            s[*num_of_words][c++] = '\0';
            (*num_of_words)++;
            c = 0;

            continue;
        }
        s[*num_of_words][c++] = sen[i];
    }
    return s;
}