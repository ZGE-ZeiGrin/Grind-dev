//  DAY 12 LEARNING C PROGRAMMING
#include <stdio.h>

int main(){

    // LESSON 28: ARRAY

    int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    char grade[] = {'A', 'B', 'C', 'D', 'F'};
    char name[] = "Grind";

    // numbers[0] = 100;
    // numbers[1] = 90;
    // numbers[2] = 80;
    // numbers[3] = 70;
    // numbers[4] = 60;

    // printf("%d\n", numbers[0]);
    // printf("%d\n", numbers[1]);
    // printf("%d\n", numbers[2]);
    // printf("%d\n", numbers[3]);
    // printf("%d\n", numbers[4]);
    // printf("%c\n", grade[0]);
    // printf("%c\n", name[0]);

    // for(int i = 0; i < 5; i++){
    //     printf("%c ", grade[i]);
    // }

    // printf("%d\n", sizeof(numbers));
    // printf("%d\n", sizeof(numbers[0]));

    int size = sizeof(numbers) / sizeof(numbers[0]);

    // for(int i = 0; i < size; i++){
    //     printf("%d ", numbers[i]);
    // }

    // for(int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
    //     printf("%d ", numbers[i]);
    // }

    // for(int i = 0; i < 5; i++){
    //     printf("%c ", name[i]);
    // }


    return 0;
}