//
// Created by DibyajyotiDey on 11/22/23.
//
#include <stdio.h>
void main(){
    FILE *fpr, *fpw;
    fpr=fopen("abc.txt", "r+");
    fpw=fopen("abc-copy.txt", "w+");
    char c = fgetc(fpr);
    while (c!=EOF){
        fputc(c, fpw);
        c = fgetc(fpr);
    }
    fclose(fpr);
    fclose(fpw);
}