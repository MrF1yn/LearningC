//
// Created by dibyajyotidey on 9/11/23.
//
//wap to find highest mark in a10 section and what is the roll number or that student(more than than 5 student should be enter)
#include <stdio.h>
void main(){
    int roll_no[100];
    int marks[100];
    int n = 0;
    printf("Enter the data: <roll_no> <marks> and terminate by entering roll 0:\n");
    for(int i = 0 ; i<100; i++){
        int roll;
        scanf("%d", &roll);
        if(roll == 0)break;
        roll_no[i]=roll;
        scanf("%d",&marks[i]);
        n++;
    }
    int idx = 0;
    int hm = marks[0];
    for(int i = 0; i < n; i++){
        if(marks[i]>hm){
            hm = marks[i];
            idx = i;
        }
    }
    printf("The highest marks is: %d and the roll number is: %d", hm, roll_no[idx]);
}