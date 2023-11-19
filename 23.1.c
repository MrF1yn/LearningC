//
// Created by dibyajyotidey on 16/11/23.
//
//wap using structure student: name, roll, marks. and pointer and provide value and print it. Also print each field memory address.
#include <stdio.h>
#include <string.h>
#define START 5;
typedef struct {
    char name[10];
    int roll;
    int marks;
} student_database;
void main(){
    student_database db;
    strcpy(db.name, "HELLO");
    db.roll = 10;
    db.marks = 50;
    student_database *ptr = &db;
    printf("Name: %s\n", (*ptr).name);
    printf("Roll Number: %d\n", (*ptr).roll);
    printf("Marks of Student: %d\n", (*ptr).marks);

    printf("Address Name: %x\n", &db.name);
    printf("Address Roll Number: %x\n", &db.roll);
    printf("Address Marks of Student: %x\n", &db.marks);

}