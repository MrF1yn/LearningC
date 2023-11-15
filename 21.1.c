//
// Created by dibyajyotidey on 9/11/23.
//
//wap to find the student who scored the highest marks using array(more than than 5 student should be enter)
#include <stdio.h>
void main(){
    int roll_no[100];
    int marks[100];
    int i;
    printf("Enter the data: <roll_no> <marks> and terminate by entering roll 0:\n");
    for(i = 0 ; i<100; i++){
        int roll;
        scanf("%d", &roll);
        if(roll == 0)break;
        roll_no[i] = roll;
        scanf("%d",&marks[i]);
    }
    int idx = 0;
    int hm = marks[0];
    for(int j = 0; j < i; j++){
        if(marks[j]>hm){
            hm = marks[j];
            idx = j;
        }
    }
    printf("The highest marks is: %d and the roll number is: %d\n", hm, roll_no[idx]);
}