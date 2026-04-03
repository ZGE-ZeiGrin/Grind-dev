#include <stdio.h>
#include <conio.h>

int main(){
    // Exercise 01: Calculate the Circumference and Area of a Circle.
    int d = 0;
    int r = 0;
    int cv = 0;
    int dt = 0;

    printf("Enter the length: ");
    scanf("%d", &d);

    printf("input width: ");
    scanf("%d", &r);

    cv = (d + r) * 2;
    dt = d * r;

    printf("perimeter: %d \n", cv);
    printf("acreage: %d \n", dt);
    getch();

    // Exercise 02: Calculate the average score of Windows, Winword, and Excel (1 decimal place).

    int Windows = 0;
    int winWord = 0;
    int Excel = 0;
    float x = 0;

    printf("Enter your Windows score: ");
    scanf("%d", &Windows);

    printf("Enter your Word score: ");
    scanf("%d", &winWord);

    printf("Enter your Excel score: ");
    scanf("%d", &Excel);

    x = (Windows + winWord + Excel) / 3.0;

    printf("Your average score is: %.1f\n", x);

    // Exercise 03: Write a program to input a positive integer n from the keyboard

    int n = 0;
    int s1 = 0;
    int s2 = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    s1 = (n * (n + 1) / 2);
    s2 = (n* (n + 1) * (2 * n + 1) / 6);

    printf("The sum of n of S1 is: %d\n", s1);

    printf("The sum of n of S2 is: %d\n", s2);

    // Exercise 04: Write a program to input two resistors, R1 and R2. Calculate the total resistance in the following cases:
    // - R1 and R2 are in series: (Total = R1 + R2)
    // - R1 and R2 are in parallel: (Total = (R1 * R2) / (R1 + R2))

    float R1 = 0;
    float R2 = 0;
    float series = 0;
    float parallel = 0;

    printf("Enter value for R1: ");
    scanf("%f", &R1);

    printf("Enter value for R2: ");
    scanf("%f", &R2);

    series = (R1 + R2);
    parallel = (R1 * R2) / (R1 + R2);

    printf("Total series is: %.2f Ohm\n", series);
    printf("Total prarallel is: %.2f Ohm\n", parallel);

    // Exercise 05: Write a program to input three real numbers a, b, and c. Calculate their sum and print the result to the screen

    float a = 0;
    float b = 0;
    float c = 0;
    float sum = 0;

    printf("Enter a: ");
    scanf("%f", &a);

    printf("Enter b: ");
    scanf("%f", &b);

    printf("Enter c: ");
    scanf("%f", &c);

    sum = a + b + c;

    printf("\nYour result in aligned format:\n\n");
    printf("%10.2f\n", a);
    printf("%+10.2f\n", b);
    printf("%10.2f\n", c);

    printf("----------\n");
    printf("%10.2f\n", sum);

    return 0;
}
