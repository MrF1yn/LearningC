//
// Created by dibyajyotidey on 16/8/23.
//
// wap to find time in hh:mm:ss format from seconds.

#include <stdio.h>
void main(){
    int seconds;
    printf("Enter the time in seconds: \n");
    scanf("%d", &seconds);
    printf("The time in hh:mm:ss format is %d:%d:%d", seconds/3600, seconds%3600/60, seconds%60);
}