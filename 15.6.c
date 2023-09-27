//
// Created by dibyajyotidey on 27/9/23.
//
//wap to find the largest word present in a sentence and print the word and its length.
#include "stdio.h"
#include "string.h"
void main(){
    char s[1000];
    printf("Enter the sentence: \n");
    scanf("%[^\n]%*c", &s);
    int n = strlen(s);
    int max = 0;
    int len = 0;
    int start = 0;
    int f = 0;
    for (int i = 0; i < n; i++){
        if(f==0){
        start = i;
        f = 1;
        }
        if(s[i]==' '||i==n-1) {
            if(len>max){
                max = len;
                f=0;

            }
            len = 0;
        }
        else len++;
    }
    printf("The largest word is: \n");
    for(int i = start; i<max+start; i++){
        printf("%c", s[i]);
    }
    printf("\nThe length of the largest word is: %d", max);
}
