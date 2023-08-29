//
// Created by dibyajyotidey on 24/8/23.
//
//wap s=1+(1+2)+(1+2+3)+...+(1+2+3+...+n) where n is user input.
#include "stdio.h"
void main(){
    int n, sum = 0;
    printf("Enter the number of terms: \n");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            sum+=j;
        }
    }
    printf("Sum = %d", sum);
}
