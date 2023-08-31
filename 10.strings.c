//
// Created by dibyajyotidey on 31/8/23.
//
#include <ctype.h>
#include "stdio.h"
int main(){
    char str[50];
    printf("Enter a string: ");


//    scanf("%[^\n]s", str);
//    printf("You entered %s", str);

    gets(str);
    puts(str);
}