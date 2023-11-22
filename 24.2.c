//
// Created by DibyajyotiDey on 11/22/23.
//
//wap to append a phrase into text.txt
#include <stdio.h>
void main(){
    FILE *fp;
    fp=fopen("abc.txt", "a");
    fputs("\nWELCOME TO KIIT!\n", fp);
    fclose(fp);
}