// -- DAY 2 LEARNING C++ --
#include <iostream>
#include <cmath>

int main() {
    //  -- LESSON 5: Arithmetic operators -- //
    int student = 60;
    // int student = 6 - 4 + 2 * 3 / 2;

    student = student + 10;
    student++;

    int students = student - 1;
    student-=1;
    student--;

    student = student * 2;
    student*=2;
    
    student = student / 2;
    student/=2;

    int remainder = student % 3;

    std::cout << student << '\n';

    // -- LESSON 6: Type casting and type conversion -- //

    double x = 3.14;
    char y = 100;

    std::cout << x << '\n';
    std::cout << y << '\n';

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << "%";

    // -- LESSON 7: User input and math functions -- //

    std::string name = "Grind";
    int age = 19;

    std::cout << "What is your full name? ";
    // std::cin >> name;
    std::getline(std::cin >> std::ws, name);

    std::cout << "How old are you? ";
    std::cin >> age;
    std::cin.ignore();

    std::cout << "Hello " << name << "!\n";
    std::cout << "You are " << age << " years old.\n";

    // -- LESSON 8: Math functions -- //

    double x = 3;
    double y = 2;
    double z;

    // z = std::max(x, y);
    // z = std::min(x, y);
    z = pow(2, 3);
    z = sqrt(16);
    z = abs(-5);
    z = round(x);
    z = ceil(x);
    z = floor(x);

    std::cout << z << '\n';

    return 0;
}
