#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

    // Exercise 1

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

    // Exercise 2

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    printf("Enter positive integer A: ");
    scanf("%d", &a);

    printf("Enter positive integer B: ");
    scanf("%d", &b);

    printf("Enter positive integer C: ");
    scanf("%d", &c);

    printf("Enter positive integer D: ");
    scanf("%d", &d);

    int max = a;

    if(b > max) max = b;
    if(c > max) max = c;
    if(d > max) max = d;

    printf("Max value is: %d\n", max);

    int min = a;

    if(b < min) min = b;
    if(c < min) min = c;
    if(d < min) min = d;

    printf("Min value is: %d\n", min);

    // Exercise 3

    int a = 0;
    int b = 0;
    int c = 0;
    float p = 0;
    int perimeter = 0;
    float acreage = 0;

    printf("Enter the value A: ");
    scanf("%d", &a);

    printf("Enter the value B: ");
    scanf("%d", &b);

    printf("Enter the value C: ");
    scanf("%d", &c);

    perimeter = a + b + c;
    printf("The perimeter of the triangle is: %d\n", perimeter);

    p = (float)perimeter / 2;
    acreage = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("The area of the triangle is: %.2f\n", acreage);

    if(a + b > c && a + c > b && b + c > a){
        printf("This is a triangle!\n");
    }
    else{
        printf("These numbers do NOT form a triangle.\n");
    }

    // Exercise 4

    int time = 0;
    int hours = 0;
    int seconds = 0;
    int minutes = 0;
    int additional_seconds = 0;
    int totalSeconds = 0;

    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    printf("Enter second: ");
    scanf("%d", &seconds);

    printf("Enter additional_seconds: ");
    scanf("%d", &additional_seconds);

    totalSeconds = hours * 3600 + minutes * 60 + seconds + additional_seconds;
    hours = (totalSeconds / 3600) % 24;
    minutes = (totalSeconds / 60) % 60;
    seconds = totalSeconds % 60;

    printf("Resulting time: %02d:%02d:%02d\n", hours, minutes, seconds);

    // Exercise 5

    char operator = '\0';
    double a = 0.0;
    double b = 0.0;
    double result = 0.0;

    printf("Enter the value A: ");
    scanf("%lf", &a);

    printf("Enter the operator ( + - * /): ");
    scanf(" %c", &operator);

    printf("Enter the value B: ");
    scanf("%lf", &b);

    switch(operator){
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            if(b == 0){
                printf("You can't divide by zero!\n");
            }
            else{
                result = a / b;
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    printf("Result: %.4lf", result);

    return 0;
}