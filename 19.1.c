//WAP to find  average of n numbers present in an array using function with pointers to get it
#include<stdio.h>
void average(int*, int*);
void main(){
    int n;
    printf("Enter the number of elements in an array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    average(arr, &n);
}
void average(int *arr, int *n){
    int s = 0;
    for(int i=0; i < *n; i++){
        s = s + *(arr+i);
    }
    printf("The sum is: %d\n", s);
    printf("The average is: %f\n", (double)s/(*n));
}
