//
// Created by DibyajyotiDey on 11/23/23.
//
//wap to read the data from a text file where the file is taken from command line argument.
#include <stdio.h>
int main(int argc, char **argv){
    FILE *fp;
    char *filename;
    char ch;
    if(argc<2){
        printf("Missing filename\n");
        return(1);
    }
    else{
        filename = argv[1];
        printf("Filename: %s\n", filename);
    }
    fp = fopen(filename, "r");

    if(fp){
        printf("File contents:\n");
        ch = fgetc(fp);
        while (ch!=EOF){
            printf("%c",ch);
            ch = fgetc(fp);
        }
    }
    else {
        printf("Failed to open file\n");
    }
    fclose(fp);
    return 0;
}
