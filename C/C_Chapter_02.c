#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

    // Exercise 1: Write a program to input three positive integers from the keyboard. Find and display the maximum value among those three numbers.

    // int a = 0;
    // int b = 0;
    // int c = 0;

    // printf("Enter positive integer A: ");
    // scanf("%d", &a);

    // printf("Enter positive integer B: ");
    // scanf("%d", &b);

    // printf("Enter positive integer C: ");
    // scanf("%d", &c);

    // int max = a;

    // if(max = a){
    //     printf("Max value is: %d\n", max);
    // }

    // else if(b >= max){
    //     printf("Max value is: %d\n", max);
    // }

    // else if(c >= max){
    //     printf("Max value is: %d\n", max);
    // }
    
    // else{
    //     printf("Invalid value, please try again.\n");
    // }

    // Exercise 2: Write a program to input four positive integers from the keyboard. Find and display the maximum and minimum values among those four numbers.

    // int a = 0;
    // int b = 0;
    // int c = 0;
    // int d = 0;

    // printf("Enter positive integer A: ");
    // scanf("%d", &a);

    // printf("Enter positive integer B: ");
    // scanf("%d", &b);

    // printf("Enter positive integer C: ");
    // scanf("%d", &c);

    // printf("Enter positive integer D: ");
    // scanf("%d", &d);

    // int max = a;

    // if(b > max) max = b;

    // if(c > max) max = c;

    // if(d > max) max = d;

    // printf("Max value is: %d\n", max);

    // int min = a;

    // if(b < min) min = b;

    // if(c < min) min = c;

    // if(d < min) min = d;

    // printf("Min value is: %d\n", min);

    // Exercise 3: Write a program that prompts the user to input three positive integers ($a, b, c$). Determine if these three numbers can form a triangle. (The condition for a triangle is that the sum of any two sides must be greater than the remaining side). If they do form a triangle, calculate the perimeter and area; otherwise, display a message stating that they do not form a triangle.

    // int a = 0;
    // int b = 0;
    // int c = 0;
    // float p = 0;
    // int perimeter = 0;
    // float acreage = 0;

    // printf("Enter the value A: ");
    // scanf("%d", &a);

    // printf("Enter the value B: ");
    // scanf("%d", &b);

    // printf("Enter the value C: ");
    // scanf("%d", &c);

    // perimeter = a + b + c;

    // printf("The perimeter of the triangle is: %d\n", perimeter);

    // p = (float)perimeter / 2;
    // acreage = sqrt(p * (p - a) * (p - b) * (p - c));

    // printf("The area of the triangle is: %.2f\n", acreage);

    // if(a + b > c && a + c > b && b + c > a){
    //     printf("This is a triangle!\n");
    // }
    // else{
    //     printf("These numbers do NOT form a triangle.\n");
    // }

    // Exercise 4: Write a program that prompts the user to input a specific time in hours, minutes, and seconds (hh:mm:ss). Then, input an additional number of seconds to be added. Finally, calculate and display the resulting time in the standard format: hh:mm:ss.

    // int time = 0;
    // int hours = 0;
    // int seconds = 0;
    // int minutes = 0;
    // int additional_seconds = 0;
    // int totalSeconds = 0;

    // printf("Enter Hours: ");
    // scanf("%d", &hours);

    // printf("Enter minutes: ");
    // scanf("%d", &minutes);

    // printf("Enter seconds: ");
    // scanf("%d", &seconds);

    // printf("Enter additional seconds: ");
    // scanf("%d", &additional_seconds);

    // totalSeconds = hours * 3600 + minutes * 60 + seconds + additional_seconds;
    // hours = (totalSeconds / 3600) % 24;
    // minutes = (totalSeconds / 60) % 60;
    // seconds = totalSeconds % 60;

    // printf("Resulting time: %02d:%02d:%02d\n", hours, minutes, seconds);

    // Exercise 5

    int a = 0;
    int b = 0;
    int x = 0;
    
    // Use float when using division calculation
    float a = 0;
    float b = 0;
    float x = 0;

    printf("Enter the value A: ");
    scanf("%d", &a);

    printf("Enter the value B: ");
    scanf("%d", &b);

    x = a + b;
    printf("A + B is equal to:%d\n", x);

    x = a - b;
    printf("A - B is equal to:%d\n", x);

    x = a * b;
    printf("A * B is equal to:%d\n", x);

    x = a / b;
    printf("A / B is equal to:%.2f\n", x);

    switch(a, b){
        case 1:
            if(a + b){
                printf("A + B is equal to:%d\n", x);
                break;
            }
        case 2:
            if(a - b){
                printf("A - B is equal to:%d\n", x);
                break;
            }
        case 3:
            if(a * b){
                printf("A * B is equal to:%d\n", x);
                break;
            }
        case 4:
            if(a / b){
                printf("A / B is equal to:%d\n", x);
            }
    }
    printf("%d\n");

    return 0;
}