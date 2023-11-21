//
// Created by dibyajyotidey on 16/11/23.
//
//wap give an example of enum type.
#include <stdio.h>
#include <string.h>
typedef enum {MON, TUE, WED, THURS, FRI, SAT, SUN} Days;
void main(){
    Days start, end;
    start = TUE;
    end = SAT;
    printf("%d %d\n", start, end);
    start = 64;
    printf("%d %d\n", start, end);
}
