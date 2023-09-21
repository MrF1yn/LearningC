//
// Created by dibyajyotidey on 14/9/23.
//
//wap to print fibonacci series which starts with 2 and 3 upto n terms using function.

#include "stdio.h"
void fibonacci(int);
void main(){
    int a;
    printf("Enter the n-th term: \n");
    scanf("%d", &a);
    printf("The Fibonacci sequence upto %dth term is:\n", a);
    fibonacci(a);
}
void fibonacci(int a){
    int n1 = 1, n2 = 1, n3 = 0;
    for(int i=2;i<a;++i)
    {
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
}