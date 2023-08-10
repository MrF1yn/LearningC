//
// Created by dibyajyotidey on 10/8/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
    time_t t1;
    srand((unsigned) time(&t1));
    printf("%d",rand()%10);
}