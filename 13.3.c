//
// Created by dibyajyotidey on 14/9/23.
//
//wap to print fibonacci series which starts with 2 and 3 upto n terms using function.

#include "stdio.h"
void fibonacci(int);
void main(){
    int a;
    printf("Enter the number: \n");
    scanf("%d", &a);
    printf("The Fibonacci sequence upto %dth term is:\n", a);
    fibonacci(a);
}
void fibonacci(int a){
    int n1 = 2, n2 = 3, n3 = 0;
    for(int i=2;i<a;++i)//loop starts from 2 because 0 and 1 are already printed
    {
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
}