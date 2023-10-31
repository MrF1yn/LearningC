//
// Created by dibyajyotidey on 5/10/23.
//
//wap which will ask to enter a name, then print the name like given example.
//Rohit Kumar Singh -> R K Singh
//Vikas biblat shankar sahoo -> V B S Sahoo
//Rahul Raj -> R Raj
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char** split_words(char, char*, int*);
char to_uppercase(char);
int* index_of_first_spaces(char, char*, int*);
void main(){
    char s[1000];
    printf("Enter your name: \n");
    scanf("%[^\n]s", s);
    int size = 0;
    int* arr = index_of_first_spaces(' ',s, &size);
    printf("The formatted name is: ");
    for(int i = 0; i < size; i++){
        //if last word i.e last space in the sentence
        if(i == size-1){
            for(int j = arr[i]+1; j < strlen(s); j++){
                char c = s[j];
                if(j == arr[i]+1){//uppercase first character of the surname.
                    c = to_uppercase(c);
                }
                printf("%c", c);
            }
            return;
        }
        // Printing only the first character after space delim and uppercase it.
        printf("%c ", to_uppercase(s[arr[i]+1]));
    }

}

char to_uppercase(char s){
        if(s>='a'&&s<='z')
            return s-32;
    return s;
}


int* index_of_first_spaces(char delim, char* sen, int *size){
    int *arr = (int *)malloc(500 * sizeof(int));
    int n = (int)strlen(sen);
    arr[(*size)++] = -1;
    for(int i = 0; i < n; i++){
        if(delim == sen[i]){
            arr[(*size)++] = i;
        }
    }
    return arr;
}