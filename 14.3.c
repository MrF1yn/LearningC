//
// Created by dibyajyotidey on 21/9/23.
//
//wap to add those integer numbers which is multiple of 4 present in an array using passing array to a function

#include <stdio.h>
int add(int[]);
void main()
{
    int s;
    printf("Enter the size of the array: \n");
    scanf("%d", &s);
    int a[s];
    printf("Enter the array elements: \n");
    for(int i = 0; i<s; i++){
        scanf("%d", &a[i]);
    }
    printf("The sum of numbers which are multiple of 4 are: %d", add(a));
}
int add(int a[]){
    int s = 0;
    for(int i = 0; i< sizeof(*a); i++){
        if(a[i]%4==0)
            s = s+a[i];
    }
    return s;
}