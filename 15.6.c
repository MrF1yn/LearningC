//
// Created by dibyajyotidey on 27/9/23.
//
//wap to find the largest word present in a sentence and print the word and its length.
//wap to find the largest word present in a sentence and print the word and its length.
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
char** split_words(char, char*, int*);
void main(){
    char s[1000];
    printf("Enter the sentence: \n");
    scanf("%[^\n]%*c", &s);
    int num_of_words = 0;
    char** words = split_words(' ', s, &num_of_words);
    int max = strlen(words[0]);
    int idx = 0;
    for (int i = 0; i < num_of_words; i++){
        int len = strlen(words[i]);
        if(len>max){
            max = len;
            idx = i;
        }
    }
    printf("The largest word in the sentence is: %s\n", words[idx]);
    printf("The size of the word is: %d", max);

    for (int i = 0; i < 1000; i++) {
        free(words[i]);
    }
    free(words);
}
char** split_words(char delim, char* sen, int *num_of_words){
    char **s = (char **)malloc(1000 * sizeof(char *));
    int row;
    // for each row allocate Cols ints
    for (row = 0; row < 1000; row++) {
        s[row] = (char *)malloc(1000 * sizeof(char ));
    }
    int n = strlen(sen);
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
