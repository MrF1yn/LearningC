//
// Created by dibyajyotidey on 23/8/23.
// wap to display grade from marks using if else.
#include "stdio.h"

void main(){
    int marks = 0;
    char grade;
    printf("Enter your marks: \n");
    scanf("%d", &marks);
    if(marks>89){
        grade = 'O';
    }
    else if (marks > 79) {
        grade = 'E';
    }
    else if (marks > 69) {
        grade = 'A';
    }
    else if (marks > 59) {
        grade = 'B';
    }
    else if (marks > 49) {
        grade = 'C';
    }
    else if (marks > 39) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }
    printf("You have got the grade: %c. \n", grade);
}