#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

    // Exercise 1: Write a program to input three positive integers from the keyboard. Find and display the maximum value among those three numbers.

    int a = 0;
    int b = 0;
    int c = 0;

    printf("Enter positive integer A: ");
    scanf("%d", &a);

    printf("Enter positive integer B: ");
    scanf("%d", &b);

    printf("Enter positive integer C: ");
    scanf("%d", &c);

    int max = a;

    if(max = a){
        printf("Max value is: %d\n", max);
    }

    else if(b >= max){
        printf("Max value is: %d\n", max);
    }

    else if(c >= max){
        printf("Max value is: %d\n", max);
    }
    
    else{
        printf("Invalid value, please try again.\n");
    }

    return 0;
}