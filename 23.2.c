//
// Created by dibyajyotidey on 16/11/23.
//
//give example of union
#include <stdio.h>
#include <string.h>
typedef union {
    char name[10];
    int roll;
    int marks;
} student_database;
void main(){
    student_database db;
    strcpy(db.name, "HELLO");
    printf("Name: %s\n", db.name);
    db.roll = 10;
    printf("Roll Number: %d\n", db.roll);
    db.marks = 50;
    printf("Marks of Student: %d\n", db.marks);
}