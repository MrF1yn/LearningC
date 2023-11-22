//
// Created by DibyajyotiDey on 11/22/23.
//
#include <stdio.h>
void main(){
    FILE *fp = fopen("abc.txt", "r+");
    char c = fgetc(fp);
    int chars = 0, spaces = 0, tabs = 0, lines = 0;
    while (c!=EOF){
        if(c == '\n') {
            lines++;
        } else if(c == ' '){
            spaces++;
        } else if(c == '\t'){
            tabs++;
        }
        chars++;
        c = fgetc(fp);
    }
}