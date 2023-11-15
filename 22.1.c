//
// Created by dibyajyotidey on 15/11/23.
//
//wap to add 2 distances having kilometer and meter
//wap to add 2 times(HH:MM:SS)
//wap use structure to perform addition, subtraction, multiplication, division on 2 complex number.
#include <stdio.h>
typedef struct Complex{
    int real;
    int comp;
} Distance;
Complex sum(Complex, Complex);
void main(){
    Complex d1;
    Complex d2;
    printf("Enter the distance1: \n");
    scanf("%d %d", &d1.real, &d1.comp);
    printf("Enter the distance1: \n");
    scanf("%d %d", &d2.real, &d2.comp);
    Complex res = sum(d1, d2);
    printf("The total distance is: %d Km %d comp", res.real, res.comp);


}
Complex sum(Complex a, Complex b){
    Complex sum;
    sum.real = a.real + b.real;
    sum.comp = a.comp + b.comp;
    if(sum.comp >= 1000){
        sum.real = sum.real + sum.comp / 1000;
        sum.comp = sum.comp % 1000;
    }
    return sum;
}