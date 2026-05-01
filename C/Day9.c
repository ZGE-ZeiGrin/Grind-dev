// DAY 9 LEARNING C PROGRAMMING
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// void hello(char name[], int age); // Function Prototypes

void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age);

int main(){

    //LESSON 19: Function Prototypes
    
    hello("Grind", 19);

    if(ageCheck(13)){
        printf("You are old enough to work at the Web develop.");
    }
    else{
        printf("You must be 16+ to work at the Web develop.");
    }

    //LESSON 20: While Loops

    int number = 0;

    // while(1 == 1){
    //     printf("HELP! I'M STUCK IN A LOOP!");
    // }

    while(number <= 0){
        printf("Enter a number greater than 0: ");
        scanf("%d", &number);
    }

    // do{
    //     printf("Enter a number greater than 0: ");
    //     scanf("%d", &number);
    // }while(number <= 0);

    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0){
        printf("Name cannot be empty! Please enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s", name);

    bool isRunning = true;
    char response = '\0';

    while(isRunning){
        printf("You are playing a game\n");
        printf("Would you like to continue? (Y = yes, N = no): ");
        scanf(" %c", &response);

        if(response != 'Y' && response != 'Y'){
            isRunning = false;
        }
    }
    printf("You exit the game.");
    
    return 0;
}

void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age){
    // if(age >= 16){
    //     return true;
    // }
    // else{
    //     return false;
    // }

    return age >=16;
}