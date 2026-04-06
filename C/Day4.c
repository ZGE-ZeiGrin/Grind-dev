// DAY 4: LEARING C PROGRAMMING
#include <stdio.h>

int main(){

    // LESSON 11: Weight Converter

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Coversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): \n");
    scanf("%d", &choice);

    if(choice == 1){
        // Kilograms to pounds
        printf("Enter the weight in kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);
    }
    else if(choice == 2){
        printf("Enter the weight in pounds: ");
        scanf("%f", &pounds);
        pounds = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilograms);
    }
    else{
        printf("Invalid choice! Please enter 1 or 2\n");
    }

    // LESSON 12: Temperature Program

    char choice = '\0';
    float fahrenheitn = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("C. Fahrenheit to Celsius\n");
    printf("Is the temp in Celsius (C) or Fahrenheit(F)?: \n");
    scanf(" %c", &choice);

    if(choice == 'C'){
        // C to F
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheitn = (celsius * 9 / 5) + 32;
        printf("%.1f Celsius is equal to %.1f Fahrenheit\n", celsius, fahrenheitn);
    }
    else if(choice == 'F'){
        // F to C
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheitn);
        celsius = (fahrenheitn - 32) * 5 / 9;
        scanf("%.1f Fahrenheit is equal to %.1f Celsius\n", fahrenheitn, celsius);
    }
    else{
        printf("Invalid choice! Please select C or F\n");
    }

    return 0;
}