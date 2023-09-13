//
// Created by dibyajyotidey on 13/9/23.
//
//wap to reverse array elements.
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
    printf("The reversed array is: \n");
    int c=0;
    for(int i = s-1; i>-1; i--){
        b[c++] = a[i];
    }
    for (int i = 0; i < s; i++) {
        printf("%d ", b[i]);
    }
}