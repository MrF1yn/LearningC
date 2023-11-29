//
// Created by DibyajyotiDey on 11/23/23.
//
//wap to print sum of 2 numbers given in the command line
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char**argv){
    if (argc<2){
        printf("ERROR: At least 2 numbers are required\n");
        return 1;
    }
    int s = 0;
    for(int i = 0; i<argc; i++){
         s+=atoi(argv[i]);
    }
    printf("The sum of the numbers are: %d\n", s);
    return 0;
}