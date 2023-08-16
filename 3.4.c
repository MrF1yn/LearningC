//
// Created by dibyajyotidey on 10/8/23.
//
//wap to calculate the total amount of rupees we have after getting the following information.
// take input number of 10,20,50,100,500,2000 rupee notes.

#include <stdio.h>

void main(){
    int notes[] = {10,20,50,100,500,2000};
    int number_of_notes[6];
    int total = 0;
    for(int i=0; i<6; i++){
        printf("Enter the number of %d rupee notes: \n", notes[i]);
        scanf("%d", &number_of_notes[i]);
        total += notes[i]*number_of_notes[i];
    }

    printf("The total amount is %d", total);
}