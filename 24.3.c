//
// Created by DibyajyotiDey on 11/22/23.
//
//wap ta print total number of characters present in a file
#include <stdio.h>
void main(){
    FILE *fp = fopen("abc.txt", "r+");
    char c = fgetc(fp);
    int chars = 0;
    while (c!=EOF){
        chars++;
        c = fgetc(fp);
    }
    printf("The total number of characters present in the file are: %d", chars);
}