//
// Created by dibyajyotidey on 15/11/23.
//
//wap which will take 5 students information like name, roll, marks, email id and height and find the student information
//who have the highest mark using array of structure
#include <stdio.h>
typedef struct Student{
    char name[50];
    char email[500];
    int roll;
    int marks;
    int height;
} Student;
void main(){
    Student db[100];
    int i;
    printf("Enter the data: <roll_no> <name> <marks> <email> <height> and terminate by entering roll 0:\n");
    for(i = 0 ; i<100; i++){
        int roll;
        scanf("%d", &roll);
        if(roll == 0)break;
        db[i].roll = roll;
        scanf("%s %d %s %d",db[i].name, &db[i].marks, db[i].email, &db[i].height);
    }
    Student high = db[0];
    for(int j = 0; j < i; j++){
        if(db[j].marks>high.marks){
            high = db[j];
        }
    }
    printf("The Student with the highest marks is:\n");
    printf("Name: %s\n"
           "Roll: %d\n"
           "Marks: %d\n"
           "Email: %s\n"
           "Height: %d\n"
           ,high.name, high.roll, high.marks, high.email, high.height);
}