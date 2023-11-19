//
// Created by dibyajyotidey on 16/11/23.
//
#include <stdio.h>
#include <string.h>
#define START 5;
typedef union {
    char name[10];
    int roll;
    int marks;
} student_database;
typedef enum {MON, TUE, WED, THURS, FRI, SAT, SUN} Days;
void main(){
//    student_database db;
//    strcpy(db.name, "HELLO");
//    printf("Name: %s\n", db.name);
//    db.roll = 10;
//    printf("Roll Number: %d\n", db.roll);
//    db.marks = 50;
//    printf("Marks of Student: %d\n", db.marks);
    Days start, end;
    start = TUE;
    end = SAT;
    printf("%d %d", start, end);
    start = 64;
    printf("%d %d", start, end);
}