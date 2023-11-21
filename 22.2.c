//
// Created by dibyajyotidey on 15/11/23.
//
//wap to add 2 times(HH:MM:SS)
#include <stdio.h>
typedef struct Time{
    int hr;
    int mm;
    int ss;
} Time;
Time sum(Time, Time);
void main(){
    Time d1;
    Time d2;
    printf("Enter the Time1: \n");
    scanf("%d %d %d", &d1.hr, &d1.mm, &d1.ss);
    printf("Enter the Time2: \n");
    scanf("%d %d %d", &d2.hr, &d2.mm, &d2.ss);
    Time res = sum(d1, d2);
    printf("The total distance is: %d hr %d mm %d s",
           res.hr, res.mm, res.ss);


}
Time sum(Time a, Time b){
    Time sum;
    sum.hr = a.hr+b.hr;
    sum.mm = a.mm+b.mm;
    sum.ss = a.ss+b.ss;
    if(sum.ss>=60){
        sum.mm = sum.mm + sum.ss/60;
        sum.ss = sum.ss%60;
    }
    if(sum.mm>=60){
        sum.hr = sum.hr + sum.mm/60;
        sum.mm = sum.mm%60;
    }
    return sum;
}
