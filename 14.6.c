//
// Created by dibyajyotidey on 21/9/23.
//
//wap to print nth term in a fibonacci series which starts with 3 and 5

#include "stdio.h"
void fibonacci(int, int, int);
void main(){
    int a;
    printf("Enter the n-th term: \n");
    scanf("%d", &a);
    printf("The Fibonacci sequence upto %dth term is:\n", a);
    fibonacci(1, 2, a);
}
void fibonacci(int n1, int n2, int a){
    int n3 = 0;
    if(a<1)
        return;
    n3 = n1+n2;
    printf("%d ", n3);
    fibonacci(n2, n3, a-1);
}