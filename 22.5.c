//
// Created by dibyajyotidey on 15/11/23.
//
//use an array of structures to calculate the gross salary(minimum 3 employee) and also calculate the salary of each employee with
//given information like basic salary:, DA, HR
//at the time of execution each year the da value should change. now calculate how much extra amount the company needs to pay after change of da
//bs: 12,500
//da: 50%
//hra: 12%
#include <stdio.h>
typedef struct Employee{
    int base_salary;
    char name[50];
    int id;
} Employee;
double gross(Employee, int, int);
void main(){
    int da, hr;
    printf("Enter the DA and HR for this year: \n");
    scanf("%d %d", &da, &hr);
    Employee db[100];
    int i;
    printf("Enter the data: <id> <name> <base salary> and terminate by entering id 0:\n");
    for(i = 0 ; i<100; i++){
        int id;
        scanf("%d", &id);
        if(id == 0)break;
        db[i].id = id;
        scanf("%s %d",db[i].name, &db[i].base_salary);
    }
    double c1 = 0;
    printf("The Current Employee details are: \n");
    for(int j = 0; j < i; j++){
        printf("ID: %d\n", db[j].id);
        printf("NAME: %s\n", db[j].name);
        printf("BASE SALARY: %d\n", db[j].base_salary);
        double gross_sal = gross(db[j], da, hr);
        printf("GROSS SALARY: %.2f\n\n", gross_sal);

        c1 = c1 + gross_sal;
    }
    printf("The Total Cost to Company for This Year Will be: Rs.%.2f\n", c1);
    printf("Enter the DA and HR for next year: \n");
    scanf("%d %d", &da, &hr);
    double c2 = 0;
    printf("The Current Employee details are: \n");
    for(int j = 0; j < i; j++){
        printf("ID: %d\n", db[j].id);
        printf("NAME: %s\n", db[j].name);
        printf("BASE SALARY: %d\n", db[j].base_salary);
        double gross_sal = gross(db[j], da, hr);
        printf("GROSS SALARY: %.2f\n\n", gross_sal);

        c2 = c2 + gross_sal;
    }
    printf("The Total Cost to Company for Next Year Will be: Rs.%.2f\n", c2);
    printf("The Company will need to spend an additional of Rs.%.2f Next Year.\n", c2-c1);
}
double gross(Employee em, int da, int hr){
    double da1 = da/100.0;
    double hr1 = hr/100.0;
    double da_am = da1*em.base_salary;
    double hr_am = hr1*em.base_salary;
    return em.base_salary+da_am+hr_am;
}