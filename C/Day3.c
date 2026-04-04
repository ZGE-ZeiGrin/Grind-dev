// DAY 3: LEARNING C PROGRAMMING
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main(){
    // LESSON 7: Math Functions

    int x = 2;
    float x = 3.99;
    float x = 45;

    // x = sqrt(x);
    // x - pow(x, 4);
    // x = round(x);
    // x = ceil(x);
    // x = floor(x);
    // x = abs(x);
    // x = log(x);
    // x = sin(x);
    // x = cos(x);
    x = tan(x);

    printf("%d", x);
    printf("%f", x);

    // LESSON 8: Circle Calculator Program

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("Area: %.2lfcm\n", area);
    printf("Surface Area: %.2lfcm\n", surfaceArea);
    printf("Volume : %.2lfcm\n", volume);

    // LESSON 9: Compound Interest Calculator

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timeCompounded = 0;
    double total = 0.0;

    printf("Compounded Interest Calulator\n");

    printf("Enter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate % (r): ");
    scanf("%lf", &rate);

    printf("Enter thr # of years (t): ");
    scanf("%d", &years);

    printf("Enter # of times compounded per year (n): ");
    scanf("%d", &timeCompounded);

    total = principal * pow(1 + rate / timeCompounded, timeCompounded * years);

    printf("After %d years, the total will be $%.2lf", years, total);

    // LESSON 10:  If Statements

    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    getchar();

    if(age >= 18){
        printf("You are an adult");
    }
    else if(age >= 65){
        printf("You are a senior");
    }
    else if(age < 0){
        printf("You haven't been born yet");
    }
    else if(age == 0){
        printf("You are a newborn");
    }
    else{
        printf("You are a child");
    }
    
    bool isStudent = true;

    if(isStudent == true){
        printf("You are a student");
    }
    else{
        printf("You are NOT a student");
    }

    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if(strlen(name) == 0){
        printf("You did not enter your name ");
    }
    else{
        printf("Hello %s", name);
    }

    return 0;
}