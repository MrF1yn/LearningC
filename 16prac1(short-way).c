//
// Created by dibyajyotidey on 31/10/23.
//
//
// Created by dibyajyotidey on 4/10/23.
//
//wap to print last char of every word in a sentence
#include <stdio.h>
#include <stdlib.h>
int str_len(char[]);
int* index_of(char, char*, int*);

void main(){
    char s[1000];
    printf("Enter the sentence: \n");
    scanf("%[^\n]%*c", s);
    int size = 0;
    int* arr = index_of(' ', s, &size);
    printf("The last characters of every word in the given sentence is: \n");
    for(int i = 0; i < size; i++){
        printf("%c ", s[arr[i]-1]);
    }

}

int str_len(char s[]){
    int i = 0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}

int* index_of(char delim, char* sen, int *size){
    int *arr = (int *)malloc(500 * sizeof(int));
    int n = str_len(sen);
    for(int i = 0; i < n; i++){
        if(delim == sen[i]){
            arr[(*size)++] = i;
        }
    }
    arr[(*size)++] = n;
    return arr;
}
