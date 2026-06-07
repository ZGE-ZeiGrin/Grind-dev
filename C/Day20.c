// DAY 20 (FINAL DAY) LEARNING C PROGRAMMING FULL COURSE
#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#include <windows.h>
#include <stdlib.h>

int main(){

    // LESSON 43: Realloc

    // int number = 0;
    // printf("Enter the number of prices: ");
    // scanf("%d", &number);

    // float *prices = malloc(number * sizeof(float));

    // if(prices == NULL){
    //     printf("Memory allocation failed!\n");
    //     return 1;
    // }

    // for(int i = 0; i < number; i++){
    //     printf("Enter price #%d: ", i + 1);
    //     scanf("%f", &prices[i]);
    // }

    // int newNumber = 0;
    // printf("Enter a new number of prices: ");
    // scanf("%d", &newNumber);

    // float *temp = realloc(prices, newNumber * sizeof(float));

    // if(temp == NULL){
    //     printf("Could not reallocate memory!\n");
    // }

    // else{
    //     prices = temp;
    //     temp = NULL;

    //     for(int i = number; i < newNumber; i++){
    //     printf("Enter price #%d: ", i + 1);
    //     scanf("%f", &prices[i]);
    //     }

    //     for(int i = 0; i < number; i++){
    //     printf("$%.2f", prices[i]);
    // }
    // }

    // for(int i = 0; i < number; i++){
    //     printf("$%.2f", prices[i]);
    // }


    // free(prices);
    // prices = NULL;

    // LESSON 44: digital clock (Last lesson)

    time_t rawtime = 0; // Jan 1 1970 (Epoch)
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while(isRunning){

        time(&rawtime);

        pTime = localtime(&rawtime);


        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);

        // printf("%ld\n", rawtime);

        sleep(1);
    }

    return 0;
}