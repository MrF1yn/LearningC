//
// Created by dibyajyotidey on 13/9/23.
//
//wap to print all unique elements present in an array.(Remove duplicate elements)
#include <stdio.h>
void main(){
    int s;
    printf("Enter the size of the array: \n");
    scanf("%d", &s);
    printf("Enter the array elements: \n");
    int a[s];
    int b[s];
    for(int i = 0; i<s; i++){
        scanf("%d", &a[i]);
    }
    int c = 0;
    for(int i = 0; i<s; i++){
        int f = 0;//searching for element a[i]
        for(int j = 0; j<s; j++){
            if(a[i]==b[j]){
                f=1;//found a[i] in b array
            }
        }
        if(f==1)continue;// if found dont add the number to b array
        b[c++] = a[i];
    }
    printf("The new array is: \n");
    for (int i = 0; i < c; i++) {
        printf("%d ", b[i]);
    }

}