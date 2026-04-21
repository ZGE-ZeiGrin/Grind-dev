#include <stdio.h>

void happyBirthday(){

    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s!");
    printf("\nYou are %d years old!\n");
}

int main(){

    char name[] = "Grind";
    int age = 19;

    happyBirthday();

    return 0;
}