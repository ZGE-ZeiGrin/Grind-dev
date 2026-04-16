// DAY 6 LEARNING C PROGRAMMING
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int main(){
    // LESSON 15: Calculator

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the operator ( + - * /)");
    scanf(" %c", &operator); // clear \n from input buffer

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    
    switch(operator){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            if(num2 == 0){
                printf("You can't divide by zero!\n");
            }
            else{
                result = num1 / num2;
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    printf("Result: %.4lf", result);

    // LESSON 16: Logical Operators

    int temp = 0;

    printf("Enter the temperature: ");
    scanf("%d", &temp);

    if(temp > 0 && temp < 30){
        printf("The temperature is GOOD");
    }
    // if(temp <= 0 || temp >= 30){
    //     printf("The temperature is GOOD");
    // }
    // else if(temp < 30){
    //     printf("The temperature is GOOD");
    // }
    else{
        printf("The temperature is BAD");
    }

    bool isSunny = true;

    if(isSunny){
        printf("It is SUNNY outside");
    }
    else{
        printf("It is CLOUDY outside");
    }

    return 0;
}