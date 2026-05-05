// DAY 10 LEARNING C PROGRAMMING
#include <stdio.h>
#include <windows.h> // Windows

int main(){

    //LESSON 21: for loops

    for(int i = 0; i < 10; i++){
        Sleep(1000);
        printf("%d\n", i);
    }

    printf("HAPPY NEW YEAR!");

    //LESSON 22: Break & Continue

    for(int i =1; i <= 10; i++){
        
        if(i == 4){
            break;
            continue;
        }
        
        printf("%d\n", i);
    }

    //LESSON 23: nested loops

    // for(int i = 1; i < 10; i++){
    //     printf("%d ", i);
    // }
    // printf("\n");

    // for(int i = 1; i < 4; i++){
    //     for(int j = 1; j < 10; j++){
    //     printf("%d ", j);
    // }
    // printf("\n");
    // }

    // for(int i = 1; i <= 10; i++){

    //     for(int j = 1; j <= 10; j++){
    //         printf("%3d ", j * j);
    //     }
    //     printf("\n");
    // }

    int row = 0;
    int colums = 0;
    char symbol = '\0';

    printf("Enter the # of rows: ");
    scanf("%d", &row);

    printf("Enter the # of colums: ");
    scanf("%d", &colums);

    printf("Enter a symbol to use: ");
    scanf(" %c", &symbol);

    // for(int i = 0; i < colums; i++){
    //     printf("%c", symbol);
    // }

    for(int i = 0; i < row; i++){
        for(int i = 0; i < colums; i++){
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}