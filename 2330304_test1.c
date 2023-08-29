//
// Created by dibyajyotidey on 24/8/23.
//
//wap which will ask to enter required data to check two circles are, a. intersecting, b.concentric, c.far away from each other.
//radius, center loc.

#include "stdio.h"
#include "math.h"

void main(){
    float r1, r2, x1, y1, x2, y2, temp;
    float d, d2;
    int choice;
    printf("Enter the radius of the circle-1:\n");
    scanf("%f", &r1);
    printf("Enter the x,y coordinates of the circle-1:\n");
    scanf("%f %f", &x1, &y1);
    printf("Enter the radius of the circle-2:\n");
    scanf("%f", &r2);
    printf("Enter the x,y coordinates of the circle-2:\n");
    scanf("%f %f", &x2, &y2);
    if(x1>x2){
        temp = x1;
        x1 = x2;
        x2 = temp;
    }
    if (y1 > y2) {
        temp = y1;
        y1 = y2;
        y2 = temp;
    }
    printf("x1: %f, y1: %f, x2: %f, y2: %f \n", x1,y1,x2,y2);
    printf("Enter the options:\n"
           "1. Check Intersecting.\n"
           "2. Check Concentric.\n"
           "3. Check Away from Each other.\n");
    scanf("%d", &choice);
    d2 = sqrtf((x2-x1)+(y2-y1));
    d = d2*d2;
    switch (choice) {

        case 1:
            if(d<(r1+r2))
                printf("The circles are intersecting.\n");
            else
                printf("The circles are non intersecting.\n");
            break;
        case 2:
            if(x1==x2&&y1==y2)
                printf("The circles are concentric.\n");
            else
                printf("The circles are non concentric.\n");
            break;
        case 3:
            if(d>(r1+r2))
                printf("The circles are far away.\n");
            else
                printf("The circles are not far away.\n");
            break;
        default:
            printf("Wrong choice entered!\n");
        
    }

}
