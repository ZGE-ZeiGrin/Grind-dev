// DAY 11 LEARNING C PROGRAMMING
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// int getComputerChoice();
// int getUserChoice();
// void checkWinner(int userChoice, int computerChoice);

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(){

    // LESSON 24: Random Numbers

    // printf("%d", rand());

    // srand(time(NULL));

    // printf("%d", rand());
    // printf("%d", RAND_MAX);

    // int min = 50;
    // int max = 100;

    // int radomNum1 = (rand() % max - min + 1) + min;
    // int radomNum2 = (rand() % max - min + 1) + min;
    // int radomNum3 = (rand() % max - min + 1) + min;

    // printf("%d %d %d", radomNum1, radomNum2, radomNum3);

    // LESSON 25: Number Guessing Game

    // srand(time(NULL));

    // int guess = 0;
    // int tries = 0;
    // int min = 1;
    // int max = 100;
    // int answer = rand() % (max - min + 1) + min;

    // printf("*** NUMBER GUESSING GAME ***\n");

    // do{
    //     printf("Guess a number betwwen %d - %d: ", min, max);
    //     scanf("%d", &guess);
    //     tries++;

    //     if(guess < answer){
    //         printf("TOO LOW!\n");
    //     }
    //     else if(guess > answer){
    //         printf("TOO HIGH!\n");
    //     }
    //     else{
    //         printf("CORRECT!\n");
    //     }

    // }while(guess != answer);

    // printf("The answer is %d\n", answer);
    // printf("It took you %d tries", tries);

    // LESSON 26: Rock Paper Scissors

    // srand(time(NULL));

    // printf("*** ROCK PAPER SCISSORS ***\n");

    // int userChoice = getUserChoice();
    // int computerChoice = getComputerChoice();

    // printf("%d\n", userChoice);
    // printf("%d\n", computerChoice);

    // switch(userChoice){
    //     case 1:
    //         printf("You chose ROCK!\n");
    //         break;
    //     case 2:
    //         printf("You chose PAPER!\n");
    //         break;
    //     case 3:
    //         printf("You chose SCISSORS!\n");
    //         break;
    // }

    // switch(computerChoice){
    //     case 1:
    //         printf("Computer chose ROCK!\n");
    //         break;
    //     case 2:
    //         printf("Computer chose PAPER!\n");
    //         break;
    //     case 3:
    //         printf("Computer chose SCISSORS!\n");
    //         break;
    // }

    // checkWinner(userChoice, computerChoice);

    // LESSON 27: Banking Program

    int choice = 0;
    float balance = 0.0f;

    printf("*** WELLCOME TO THE BANK ***");

    do{
        printf("\nSelect an option:\n ");
        printf("\n1. Check balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("\nThank you for using the bank!\n");
                break;
            default:
                printf("\nInvalid choice! Please select 1 - 4\n");
        }

    }while(choice != 4);

    return 0;
}
// int getComputerChoice(){
    
//     return (rand() % 3) + 1;
// }

// int getUserChoice(){

//     int choice = 0;

//     do{
//         printf("Chosse an option\n");
//         printf("1. ROCK\n");
//         printf("2. PAPER\n");
//         printf("3. SCISSORS\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//     }while(choice < 1 || choice > 3);
    
//     return choice;
// }

// void checkWinner(int userChoice, int computerChoice){
    
//     if(userChoice == computerChoice){
//         printf("It's a TIE!");
//     }
//     else if((userChoice == 1 && computerChoice == 3) || 
//     (userChoice == 3 && computerChoice == 2) || 
//     (userChoice == 2 && computerChoice == 1) ){
//         printf("You WIN!");
//     }
//     else if(userChoice == 3 && computerChoice == 2){
//         printf("You WIN!");
//     }
//     else{
//         printf("You LOSE!");
//     }

// }

void checkBalance(float balance){
    printf("\nYour current balance is: $%.2f\n", balance);
}

float deposit(){

    float amount = 0.0f;

    printf("\nEnter amount to deposit: $");
    scanf("%f", &amount);

    if(amount < 0){
        printf("Invalid amount\n");
        return 0.0f;
    }
    else{
        printf("Successfully deposited $%.2f\n", amount);
        return amount;
    }

    return 0.0f;
}

float withdraw(float balance){

    float amount = 0.0f;

    printf("\nEnter amount to withdraw: $");
    scanf("%f", &amount);

    if(amount <0){
        printf("Invalid amount!\n");
        return 0.0f;
    }
    else if(amount > balance){
        printf("Insufficient funds! Your balance is $%.2f\n", balance);
        return 0.0f;
    }
    else{
        printf("Successfully withdraw $%.2f\n", amount);
        return amount;
    }

    return 0.0f;
}