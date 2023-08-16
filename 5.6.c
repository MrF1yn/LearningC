//
// Created by dibyajyotidey on 16/8/23.
//
//wap to input two distances in feet and inches and find their sum.
#include <stdio.h>;
void main(){
    int feet1, feet2, inch1, inch2, feet, inch;
    printf("Enter the first distance in feet and inches: \n");
    scanf("%d %d", &feet1, &inch1);
    printf("Enter the second distance in feet and inches: \n");
    scanf("%d %d", &feet2, &inch2);
    feet = feet1 + feet2;
    inch = inch1 + inch2;
    inch>12?feet++,inch-=12:inch;
    printf("The sum of the distances is %d feet and %d inches", feet, inch);
}
