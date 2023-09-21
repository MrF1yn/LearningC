//
// Created by dibyajyotidey on 21/9/23.
//
//wap using function to swap 2 numbers using call by value method(without using third variable)
#include <stdio.h>
void swap(int ,int);
void main()
{
    int n1,n2;
    printf("PLEASE ENTER TWO NUMBERS TO SWAP:\n");
    scanf("%d%d",&n1,&n2);
    printf("BEFORE SWAP VALUE OF n1=%d ND n2=%d\n",n1,n2);
    swap(n1,n2);
}
void swap(int x,int y){
    x=x+y;
    y=x-y;
    x=x-y;
    printf("AFTER SWAP VALUE OF n1 IS %d AND VALUE OF n2 IS %d.\n",x,y);
}