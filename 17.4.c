//
// Created by dibyajyotidey on 5/10/23.
//
//wap to add any integer no.s till entering 0 without using loop. goto statement.
#include <stdio.h>
void main(){
    int s = 0, n;
    LOOP: {
    printf("Enter the next number: \n");
    scanf("%d", &n);
    if(n==0)goto OUT;
    s = s+n;
    goto LOOP;
    }
    OUT:
    printf("The sum is: %d", s);
}