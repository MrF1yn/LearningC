//
// Created by dibyajyotidey on 23/8/23.
//
//wap to check if a year is leap year or not

#include "stdio.h"

void main(){
    int year;
    printf("Enter the year: \n");
    scanf("%d", &year);
    if(year%4==0)
        printf("Leap Year.\n");
    else
        printf("Not a Leap Year.\n");
}
