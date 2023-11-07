//WAP to print address of an array with address of array pointed by a pointer which will point to that array..then using above 
//concept..try to show addition, substraction, increment and decrement operation based on that..and also print address after each operation and display it.
#include<stdio.h>
void main(){
    int arr[] = {1, 2, 3, 4, 5};
    printf("Address of array: %x \n", arr);
    int *p = arr;
    printf("Address of pointer: %x \n", arr);
    printf("Value of pointer: %d \n", *p);
    p = p + 2;
    printf("Address of arr[2] after addition: %x \n", p);
    printf("Value of arr[2]: %d \n", *p);
    p = p - 2;
    printf("Address of arr[0] after substraction: %x \n", p);
    printf("Value of arr[0]: %d \n", *p);
    p++;
    printf("Address of arr[1] after increment: %x \n", p);
    printf("Value of arr[1]: %d \n", *p);
    p--;
    printf("Address of arr[0] after decrement: %x \n", p);
    printf("Value of arr[0]: %d \n", *p);

}
