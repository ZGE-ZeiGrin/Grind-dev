// DAY 19 LEARNING C PROGRAMMING
#include <stdio.h>
#include <stdlib.h>

int main(){

    // LESSON 40:Read Files

    // FILE *pFile = fopen("input.txt", "r");
    // char buffer[1024] = {0};

    // if(pFile == NULL){
    //     printf("Could not open file\n");
    //     return 1;
    // }

    // while(fgets(buffer, sizeof(buffer), pFile) != NULL){
    //     printf("%s", buffer);
    // }

    // fclose(pFile);

    // LESSON 41: Malloc

    // char grades[5] = {0};

    // int size = sizeof(grades) / sizeof(grades[0]);

    // if(grades == NULL){
    //     printf("Memory allocation failed!\n");
    //     return 1;
    // }

    // for(int i = 0; i < number; i++){
    //     printf("Enter grade #%d: ", i + 1);
    //     scanf(" %c", &grades[i]);
    // }

    // for(int i = 0; i < number; i++){
    //     printf("%c ", grades[i]);
    // }

    // free(grades); //returning "rented" space back to the OS
    // grades = NULL; // avoids dangling pointers

    // LESSON 42: Calloc

    int number = 0;
    printf("Enter the number of player: ");
    scanf("%d", &number);

    // int *socres = malloc(number * sizeof(int));
    int *socres = calloc(number, sizeof(int));

    if(socres == NULL){
        printf("Memory allocation failed!");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Enter score: #%d ", i + 1);
        scanf("%d", &socres[i]);
    }


    for(int i = 0; i < number; i++){
        printf("%d ", socres[i]);
    }

    free(socres);
    socres = NULL;

    return 0;
}