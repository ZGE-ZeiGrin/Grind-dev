#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(){

    // Exercise 7

    // int n = 0;

    // printf("Enter the value N: ");
    // scanf("%d!", &n);

    // for(int i = 0; i <= n; i++){
    //     printf(" %d\n", i);
    // }

    // Exercise 9

    int n = 0;
    int max = 0;

    printf("Enter the value N: ");
    scanf(" %d", &n);

    for(int i; i <= n; i++){
        printf("%d\n", i);
    }

    if(n > max){
        printf("Max value is: %d\n", n);
    }
    else{
        printf("Invalid, please try again!");
    }


    return 0;
}