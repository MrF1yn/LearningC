//
// Created by DibyajyotiDey on 11/22/23.
//
//wap to print the total number of word present in a file
#include <stdio.h>
void main(){
    FILE *fp = fopen("abc.txt", "r+");
    char c = fgetc(fp);
    int words = 0;
    while (c!=EOF){
        if(c==' '||c=='\n'||c==EOF)
            words++;
        c = fgetc(fp);
    }
    printf("The total number of words present in the file are: %d", words);
}
