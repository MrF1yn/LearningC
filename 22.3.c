//
// Created by dibyajyotidey on 15/11/23.
//
//wap use structure to perform addition, subtraction, multiplication, division on 2 complex number.
#include <stdio.h>
typedef struct Complex{
    int real;
    int comp;

} Complex;
Complex sum(Complex, Complex);
Complex sub(Complex, Complex);
Complex div(Complex, Complex);
Complex mul(Complex, Complex);
void main(){
    Complex c1, c2, res[4];
    char arr[4][15] = {"SUM","SUBTRACT","MULTIPLICATION", "DIVISION"};
    printf("Enter the 1st Complex and Imaginary Number: \n");
    scanf("%d %d", &c1.real, &c1.comp);
    printf("Enter the 1st Complex and Imaginary Number: \n");
    scanf("%d %d", &c2.real, &c2.comp);
    res[0] = sum(c1, c2);
    res[1] = sub(c1, c2);
    res[2] = mul(c1, c2);
    res[3] = div(c1, c2);
    int n;
    printf("Enter the options: \n"
           "0: SUM\n"
           "1: SUB\n"
           "2: MULTIPLICATION\n"
           "3: DIVISION\n");
    scanf("%d", &n);
    if(n>3){
        printf("Invalid Input\n");
        return;
    }
    printf("The result of %s is %d+%di", arr[n], res[n].real, res[n].comp);

}
Complex sum(Complex c1, Complex c2)
{
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.comp = c1.comp + c2.comp;
    return c3;
}
Complex sub(Complex c1, Complex c2)
{
    Complex c4;
    c4.real = c1.real - c2.real;
    c4.comp = c1.comp - c2.comp;
    return c4;
}
Complex mul(Complex c1, Complex c2)
{
    Complex c5;
    c5.real = c1.real*c2.real - c1.comp*c2.comp;
    c5.comp = c1.real*c2.comp + c1.comp*c2.real;
    return c5;
}
Complex div(Complex c1, Complex c2) {
    Complex c6;
    c6.real = (c1.real * c2.real + c1.comp * c2.comp) / (c2.real * c2.real + c2.comp * c2.comp);
    c6.comp = (c1.comp * c2.real - c1.real * c2.comp) / (c2.real * c2.real + c2.comp * c2.comp);
    return c6;
}
