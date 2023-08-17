//
// Created by dibyajyotidey on 10/8/23.
//
//wap to calculate the area of a rectangle and the perimenter of it by providing length and breadth of it.
#include <stdio.h>

void main(){
    int len, bre;
    printf("Enter the length and breadth of the rectangle: \n");
    scanf("%d %d", &len, &bre);
    printf("The area is %d and the perimeter is %d", len*bre, 2*(len+bre));
}