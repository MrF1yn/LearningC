//
// Created by DibyajyotiDey on 11/22/23.
//
//wap to read and print content of a file.
#include <stdio.h>
void main(){
    FILE *fp;
    fp=fopen("abc.txt", "r+");
    char c = fgetc(fp);
    while (c!=EOF){
        printf("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);
}