//
// Created by dibyajyotidey on 21/9/23.
//
//wap using function to swap 2 numbers using call by reference method(without using third variable)
#include <stdio.h>
void swap(int* ,int*);
void main()
{
    int n1,n2;
    printf("PLEASE ENTER TWO NUMBERS TO SWAP:\n");
    scanf("%d%d",&n1,&n2);
    printf("BEFORE SWAP VALUE OF n1=%d ND n2=%d\n",n1,n2);
    swap(&n1,&n2);
    printf("AFTER SWAP VALUE OF n1=%d ND n2=%d\n",n1,n2);

}
void swap(int* x,int* y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}