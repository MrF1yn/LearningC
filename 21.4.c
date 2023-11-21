//
// Created by dibyajyotidey on 9/11/23.
//
//wap using structure like employee(id, name, age, contact number, entry time , exit time) and find the name and contact number of that
//employee who is spending most time in office.(minumum 5 employee).
#include <stdio.h>
unsigned long to_secs(int, int);
typedef struct Employee{
    char name[50];
    int id;
    int age;
    long contact;
    int entry_time;
    int exit_time;
} Employee;
void main(){
    Employee db[100];
    int i;
    printf("Enter the data: <id> <name> <age> <contact> <entry_time> <exit_time> and terminate by entering id 0:\n");
    for(i = 0 ; i<100; i++){
        int id;
        scanf("%d", &id);
        if(id == 0)break;
        db[i].id = id;
        scanf("%s %d %ld %d %d",db[i].name, &db[i].age, &db[i].contact, &db[i].entry_time, &db[i].exit_time);
    }
    printf("The Employee with the highest office time is: \n");
    Employee high = db[0];
    for(int j = 0; j < i; j++){
        if(to_secs(db[j].exit_time, db[j].entry_time) > to_secs(high.exit_time, high.entry_time)){
            high = db[j];
        }
    }
    printf("Name: %s\n Id: %d\n Age: %d\n Contact: %ld\n Entry Time: %04d\n Exit Time: %04d\n",
           high.name, high.id, high.age, high.contact, high.entry_time, high.exit_time);

}
unsigned long to_secs(int a, int b){
    int ha = a/100;
    int sa = a%100;
    int hb = b / 100;
    int sb = b % 100;
    return (unsigned long) ((ha*60)+sa) - ((hb*60)+sb);
}
