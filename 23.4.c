//
// Created by dibyajyotidey on 16/11/23.
//
//give aexample of typedef and #define
#include <stdio.h>
#define START 50;
typedef enum {MON, TUE, WED, THURS, FRI, SAT, SUN} Days;
void main(){
    Days start, end;
    start = TUE;
    end = SAT;
    printf("%d %d\n", start, end);
    start = START;
    printf("%d %d\n", start, end);
}
