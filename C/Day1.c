// --DAY 1: LEARNING C PROGRAMMING--
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    // LESSON 1: Variables

    int age = 19;
    int year = 2026;
    int quantity = 1;

    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d x items\n", quantity);

    float gpa = 3.3;
    float price = 19.99;
    float temperature = -10.1;

    printf("Your gpa is %.1f\n", gpa);
    printf("The price is $%.2f\n", price);
    printf("The temperature is %.1f\n", temperature);

    double pi = 3.14159265358979;
    double e = 2.7182818284590;

    printf("The value of pi is %.15lf\n", pi);
    printf("The value of e is %.15lf\n", e);

    char grade = 'A';
    char symbol = '!';
    char currency = '$';

    printf("Your grade is %c\n", grade);
    printf("Your favorite symbol is %c\n", symbol);
    printf("The currency is %c\n", currency);

    char name[] = "Grind";
    char food[] = "Pizza";
    char email[] = "fake123@gmail.com";

    printf("Hello %s\n", name);
    printf("Your favorite is %s\n", food);
    printf("Your email is %s\n", email);

    bool isOnline = true;
    bool isOnline = false;
    bool isStudent = true;
    // bool isStudent = false;
    bool forSale = true;
    bool forSale = false;

    printf("%d\n", isOnline);
    printf("%d\n", isStudent);
    printf("%d\n", forSale);

    if(isOnline){
        printf("You are ONLINE\n");
    }
    else{
        printf("You are OFFLINE\n");
    }

    if(isStudent){
        printf("You are Student\n");
    }
    else{
        printf("You are NOT a Student\n");
    }
    
    if(forSale){
        printf("That item is for sale\n");
    }
    else{
        printf("That item is NOT for sale\n");
    }

    // LESSON 2: Format Specifiers

    int age = 19;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Grind";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%.2f\n", price1);
    printf("%.2f\n", price2);
    printf("%.2f\n", price3);

    // LESSON 3: Arithmetic Operators

    int x = 10;
    int y = 3;
    int z = 0;

    z = x + y;
    // z = x - y;
    // z = x * y;
    // z = x / y;
    // z = x % y; 

    x++;
    // x--;

    // (Augmented assignment operators)
    x = x + 2;
    // x+=3;
    // x-=3;
    // x*=2;
    // x/=2;

    printf("%d\n", z);
    printf("%d\n", x);

    // LESSON 4: User Input

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar();
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    // scanf("%s", name);

    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;
}
