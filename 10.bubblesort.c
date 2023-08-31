//
// Created by dibyajyotidey on 31/8/23.
//

#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

void main() {
    int n, temp;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = true;
            }

        }
        if(!swapped)break;
    }
    for(int i = 0; i<n; i++){
        printf("%d ", a[i]);
    }
}