//
// Created by dibyajyotidey on 5/10/23.
//
#include "stdio.h"
int main(){
    int a = 10;
    LOOP: do {
    if (a == 15) {
        a++;
        goto LOOP;
    }
    printf("Value of a: %d\n", a);
    a++;
    }
    while(a<20);
    return 0;
}