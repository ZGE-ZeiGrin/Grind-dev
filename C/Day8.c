// DAY 8 LEARNING C PROGRAMMING
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void happyBirthday(char birthdayboi[], int yearOld){
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s!", birthdayboi);
    printf("\nHappy birthday to you!");
    printf("\nYou are %d years old!\n", yearOld);
}

double cube(double num){
    return num * num * num;
}

double square(int num){
    int result = num * num;

    return num * num;
}

bool ageCheck(int age){
    if(age > 18){
        return true;
    }
    else{
        return false;
    }
}

int getMax(int x, int y){
    if(x > y){
        return x;
    }
    else{
        return y;
    }
}

// int result = 0; //GLOBAL SCOPE (Hard to debug)

int add(int x, int y){
    int result = x + y;

    return result;
}

int subtract(int x, int y){
    int result = x - y;

    return result;
}

int main(){

    // LESSON 16: Functions (Review the old lesson)

    char name[50] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) -1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    happyBirthday(name, age);

    // LESSON 17: Return

    // int x = square(2);
    // int y = square(3);
    // int z = square(4);

    double x = cube(2);
    double y = cube(3);
    double z = cube(4);

    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%lf\n", z);

    int age = 19;

    if(ageCheck(age)){
        printf("You may sign up");
    }
    else{
        printf("You must be 18+ to sign up");
    }

    int max = getMax(2, 3);

    printf("%d", max);

    // LESSON 18: Variable Scope

    int x = 5;
    int y = 6;

    // int result = add(3, 4);
    int result = subtract(x, y);

    printf("%d", result);

    return 0;
}