//
// Created by dibyajyotidey on 13/9/23.
//
//wap to find octal equivalent of a decimal number.
#include <stdio.h>
void main(){
    int n;
    printf("Enter the decimal number: \n");
    scanf("%d", &n);
    int a[100];
    int i = 0;
    while(n>0){
        a[i++] = n%8;
        n/=8;
    }
    printf("The octal equivalent is: \n");
    for(int j = i-1; j>-1; j--){
        printf("%d", a[j]);
    }
}

