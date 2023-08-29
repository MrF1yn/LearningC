//
// Created by dibyajyotidey on 24/8/23.
//
//wap to print fibonacci series which starts with 2 and 3 upto nth term where n is user input.
#include "stdio.h"
void main(){
    int n, a = 2, b = 3, c;
    printf("Enter the number of terms: \n");
    scanf("%d", &n);
    printf("%d %d ", a, b);
    for(int i = 3; i<=n; i++){
        c = a+b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}