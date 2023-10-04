//
// Created by dibyajyotidey on 4/10/23.
//
//wap to print last char of every word in a sentence
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
    printf("The last characters of every word in a sentence is: \n");
    for (int i = 0; i<num_of_words; i++){
        printf("%c ", words[i][str_len(words[i])-1]);
    }
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