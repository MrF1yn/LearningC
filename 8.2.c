//
// Created by dibyajyotidey on 24/8/23.
//
//wap tp print all armstrong number present between 100 to 999.

#include "stdio.h"
#include "math.h"
void main(){
    int num, temp, sum, rem;
    for(int i = 100; i<=999; i++){
        num = i;
        sum = 0;
        while(num>0){
            rem = num%10;
            sum += pow(rem, 3);
            num /= 10;
        }
        if(sum==i)
            printf("%d ", i);
    }
}
