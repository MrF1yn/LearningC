//
// Created by dibyajyotidey on 1/11/23.
//
//using ptr1 try to access num value
#include <stdio.h>
void main(){
    int a[] ={10, 20, 30, 40, 50};
    int i, *p;
    p=a;// same as p=&a[0]
    for (i=0; i<5; ++i)
    {
        printf ("\n%d", *(p+i));
    }

}
