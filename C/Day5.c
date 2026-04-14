// DAY 5: LEARNING C PROGRAMMING
#include <stdio.h>
#include <stdbool.h>

int main(){

    // LESSON 13: Switches

    int dayOfWeek = 0;
    char dayOfWeek = '\0';

    // printf("Enter a day of the week (1-7): ");
    // scanf("%d", &dayOfWeek);

    printf("Enter a day of the week (M, T, W, R, F, S, U): ");
    scanf("%c", &dayOfWeek);

    // switch(dayOfWeek){
    //     case 1:
    //         printf("It is Monday");
    //         break;
    //     case 2:
    //         printf("It is Tuesday");
    //         break;
    //     case 3:
    //         printf("It is Wednesday");
    //         break;
    //     case 4:
    //         printf("It is Thursday");
    //         break;
    //     case 5:
    //         printf("It is Friday");
    //         break;
    //     case 6:
    //         printf("It is Saturday");
    //         break;
    //     case 7:
    //         printf("It is Sunday");
    //         break;
    //     default:
    //         printf("Please only enter a number (1-7)");
    // }

    switch(dayOfWeek){
        case 'M':
            printf("It is Monday");
            break;
        case 'T':
            printf("It is Tuesday");
            break;
        case 'W':
            printf("It is Wednesday");
            break;
        case 'R':
            printf("It is Thursday");
            break;
        case 'F':
            printf("It is Friday");
            break;
        case 'S':
            printf("It is Saturday");
            break;
        case 'U':
            printf("It is Sunday");
            break;
        default:
            printf("Please only enter a character (M, T, W, R, F, S, U)");
    }

    // LESSON 14: Nested If Statements

    float price = 10.00;
    bool isStudent = true;
    bool isSenior = true;

    if(isStudent){
        if(isSenior){
            printf("You get a student discount of 10%%\n");
            printf("You get a student discount of 20%%\n");
            price *= 0.7;
    }
        else{
            printf("You get a student discount of 10%%\n");
            price *= 0.9;
        }
    }
    else{
        if(isSenior){
            printf("You get a student discount of 20%%\n");
            price *= 0.8;
    }

    // if(isSenior){
    //     printf("You get a student discount of 20%\n");
    //     price *= 0.8;
    // }

    printf("The price of a ticket is: $%.2f\n", price);
    
    return 0;
}
}