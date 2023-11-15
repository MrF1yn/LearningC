//
// Created by dibyajyotidey on 9/11/23.
//
//wap to create a struct Student(name, roll, marks, gender) provide the value for it and print on screen.
#include <stdio.h>
typedef struct Student{
    char name[50];
    int roll;
    int marks;
    char gender;
} Student;
void main(){
    Student db[100];
    int i;
    printf("Enter the data: <roll_no> <name> <marks> <gender:M/F> and terminate by entering roll 0:\n");
    for(i = 0 ; i<100; i++){
        int roll;
        scanf("%d", &roll);
        if(roll == 0)break;
        db[i].roll = roll;
        scanf("%s %d %c",db[i].name, &db[i].marks, &db[i].gender);
    }
    printf("The following data entered are:\n");
    for(int j = 0; j < i; j++){
        printf("%d) Name: %s, Roll: %d, Marks: %d, Gender: %c\n", j, db[j].name, db[j].roll, db[j].marks, db[j].gender);
    }
}