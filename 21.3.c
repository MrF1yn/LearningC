//
// Created by dibyajyotidey on 9/11/23.
//
//wap using above structure Q21.2 find detail of the student who scored lowest mark(minumum 5)
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
    Student low = db[0];
    for(int j = 0; j < i; j++){
       if(db[j].marks<low.marks){
           low = db[j];
       }
    }
    printf("The Student with the lowest marks is:\n");
    printf("Name: %s, Roll: %d, Marks: %d, Gender: %c\n",low.name, low.roll, low.marks, low.gender);
}