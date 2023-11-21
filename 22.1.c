//
// Created by dibyajyotidey on 15/11/23.
//
//wap to add 2 distances having kilometer and meter
#include <stdio.h>
typedef struct Distance{
    int km;
    int m;
} Distance;
Distance sum(Distance , Distance);
void main(){
    Distance d1;
    Distance d2;
    printf("Enter the distance1: \n");
    scanf("%d %d", &d1.km, &d1.m);
    printf("Enter the distance1: \n");
    scanf("%d %d", &d2.km, &d2.m);
    Distance res = sum(d1, d2);
    printf("The total distance is: %d Km %d m", res.km, res.m);


}
Distance sum(Distance a, Distance b) {
    Distance sum;
    sum.km = a.km + b.km;
    sum.m = a.m + b.m;
    if (sum.m >= 1000) {
        sum.km = sum.km + sum.m / 1000;
        sum.m = sum.m % 1000;
    }
    return sum;
}
