//
// Created by dibyajyotidey on 16/11/23.
//
// A C program to demonstrate different storage
// classes
#include <stdio.h>

int x;

void Auto() {
    printf("\nauto class\n\n");
    auto int a = 32;
    printf("Value of the variable 'a'"
           " declared as auto: %d\n",a);
}

void Register() {
    printf("\nregister class\n\n");
    register char b = 'G';
    printf("Value of the variable 'b'"
           " declared as register: %d\n", b);
}

void Extern() {
    printf("\nextern class\n\n");
    extern int x;
    printf("Value of the variable 'x'"
           " declared as extern: %d\n",
           x);
    x = 2;
    printf("Modified value of the variable 'x'"
           " declared as extern: %d\n",
           x);
}

void Static() {
    int i = 0;
    printf("\nstatic class\n\n");''
    printf("static y and non-static p");

    printf("\nLoop started:\n");

    for (i = 1; i < 5; i++) {
        static int y = 5;
        int p = 10;
        y++;
        p++;
        printf("\nThe value of 'y', "
               "declared as static, in %d "
               "iteration is %d\n",
               i, y);
        printf("The value of non-static variable 'p', "
               "in %d iteration is %d\n",
               i, p);
    }
}

void main() {
    Auto();
    Register();
    Extern();
    Static();
}
