//
// Created by dibyajyotidey on 1/11/23.
//
//wap to count vowels and consonants in a string using pointers.
#include <stdio.h>
#include <string.h>
void main(){
    char s[1000];
    printf("Enter the string: \n");
    scanf("%[^\n]s", s);
    int v = 0;
    int c = 0;
    int *pv = &v;
    int n = strlen(s);
    for(int i = 0; i < n; i++){
        char j = *(s+i);
        if(j=='A'||j=='a'||j=='E'||j=='e'||j=='I'||j=='i'||j=='O'||j=='o'||j=='U'||j=='u')
            (*pv)++;
    }
    printf("The number of Vowels are: %d and Consonants are: %d", *pv, n - *pv);
}