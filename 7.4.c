//
// Created by dibyajyotidey on 23/8/23.
//
//wap to check weather a triangle is possible or not by providing 3 sides of the triangle. If possible find its area.
#include "stdio.h"
#include "math.h"

void main(){
    int a,b,c;
    float area, s;
    printf("Enter the 3 sides of the number: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if((a+b>c)||(a+c>b)||(b+c>a)){
        printf("The triangle is possible.\n");
    }else{
        printf("The triangle is not possible.\n");
        return;
    }

    s = (a+b+c)/2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area is: %f", area);

}