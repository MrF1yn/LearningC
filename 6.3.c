//
// Created by dibyajyotidey on 17/8/23.
//
//wap to print 3 numbers in ascending order using if-else statement.

#include "stdio.h"

void main() {
    int a, b, c;
    printf("Enter 3 numbers: \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        if (a > c) {
            if (b > c) {
                printf("%d %d %d", c, b, a);
            } else {
                printf("%d %d %d", b, c, a);
            }
        } else {
            printf("%d %d %d", b, a, c);
        }

    }
}
