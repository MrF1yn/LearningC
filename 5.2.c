#include <stdio.h>

//swap two variables without using a third variable.

void main(){
    int a1, a2, a3;
    printf("Enter 2 numbers: \n");
    scanf("%d %d", &a1, &a2);
    printf("The value of a1 is %d and a2 is %d\n", a1, a2);
    a1=a1+a2;
    a2=a1-a2;
    a1=a1-a2;

    printf("[After Swap] The value of a1 is %d and a2 is %d\n", a1, a2);
}