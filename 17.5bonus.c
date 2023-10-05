//
// Created by dibyajyotidey on 5/10/23.
//
//wap which will ask to enter a name, then print the name like given example.
//Rohit Kumar Singh -> R K Singh
//Vikas biblat shankar sahoo -> V B S Sahu
//Rahul Raj -> R Raj
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char** split_words(char, char*, int*);
char* to_uppercase_first_letter(char *s);
char to_uppercase(char);
void main(){
    char s[1000];
    printf("Enter your name: \n");
    scanf("%[^\n]s", s);
    int num_of_words = 0;
    char** words = split_words(' ', s, &num_of_words);
    printf("The formatted name is: \n");

    for (int i = 0; i < num_of_words-1; i++){
        printf("%c ", to_uppercase(words[i][0]));
    }
    printf("%s ", to_uppercase_first_letter(words[num_of_words-1]));



    for (int i = 0; i < 1000; i++) {
        free(words[i]);
    }
    free(words);
}

char to_uppercase(char s){
        if(s>='a'&&s<='z')
            return s-32;
    return s;
}

char* to_uppercase_first_letter(char *s){
    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] = s[0] - 32;
    return s;
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