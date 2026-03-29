// -- Day 3: LEARNING C++ --
#include <iostream>
#include <cmath>

int main() {
    //LESSON 9: Hypotenuse calculator practice program

    double a;
    double b;
    double c;

    std::cout << "Enter side a: ";
    std::cin >> a;

    std::cout << "Enter side b: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "side C: " << c;

    //LESSON 10: If statements

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18 && age < 100)
    {
        std::cout << "Welcome to the site!";
    }
    else if (age < 0)
    {
        std::cout << "You havent been born yet!";
    }
    else if(age >= 100)
    {
        std::cout << "You are too old to access this site!";
    }
    else{
        std::cout << "Sorry, you are not old enough to access this site.";
    }

    //LESSON 11: Switches

    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "It is January";
            break;
        case 2:
            std::cout << "It is February";
            break;
        case 3:
            std::cout << "It is March";
            break;
        case 4:
            std::cout << "It is April";
            break;
        case 5:
            std::cout << "It is May";
            break;
        case 6:
            std::cout << "It is June";
            break;
        case 7:
            std::cout << "It is July";
            break;
        case 8:
            std::cout << "It is August";
            break;
        case 9:
            std::cout << "It is September";
            break;
        case 10:
            std::cout << "It is October";
            break;
        case 11:
            std::cout << "It is November";
            break;
        case 12:
            std::cout << "It is December";
            break;
        default:
            std::cout << "Please enter in only numbers (1-12)";
    }

    char grade;

    std::cout << "What letter grade?: ";
    std::cin >> grade;

    switch(grade){
    case 'A':
        std::cout << "You did great!";
        break;
    case 'B':
        std::cout << "You did good";
        break;
    case 'C':
        std::cout << "You did okay";
        break;
    case 'D':
        std::cout << "You did not good";
        break;
    case 'F':
        std::cout << "YOU FAILED!";
        break;
    default:
        std::cout << "Please only enter in a letter grade (A-F)";
    }

    //LESSON 12: Console calculator program

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "********** CALCULATOR **********\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >>num2;
    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "result: " << result << '\n';
            break;
        default:
            std::cout << "That wasn't a valid operator\n";
            break;
    }

    std::cout << "***************************\n";

    //LESSON 13: Ternary operator

    int grade = 50;

    grade >= 60 ?  std::cout << "You Pass!" :std::cout << "You fail!";

    int number = 9;
    number % 2 == 1 ? std::cout << "ODD" : std:: cout << "EVEN";

    bool hungry = true;

    hungry ? std::cout << "You are hungry" : std::cout << "You are full";
    std::cout << (hungry ? "You are hungry" : "You are full");

    //LESSON 14: Logical operators

    int temp;
    bool sunny = true; 

    std::cout << "Enter the temperature: ";
    std::cin>> temp;

    if(temp > 0 && temp < 30){
        std::cout << "The temperature is good!";
    }
    else{
        std::cout << "The temperature is bad!";
    }

    if(sunny == true){
        std::cout << "It is sunny outside!";
    }
    else{
        std::cout << "It is cloudy outside!";
    }

    return 0;
}