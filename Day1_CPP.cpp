// -- DAY 1 LEARNING C++ --
#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;

using text_t = std::string;
using number_t = int;

namespace first{
    int x = 10;
}
namespace second{
    int x = 0;
}

int main() {
    // -- LESSON 1:  Variables and basic data types -- //

    int x = 5;
    int y = 7;
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    //interger (whole number)
    int age = 19;
    int year = 2026;
    int day = 7;

    std::cout << age << '\n';
    std::cout << year << '\n';
    std::cout << day << '\n';

    //double (number including decimal)
    double price = 19.99;
    double gpa = 3.3;
    double temperature = 70.7;

    std::cout << price << '\n';
    std::cout << gpa << '\n';
    std::cout << temperature << '\n';


    //single character
    char grade = 'A';
    char initial = 'J';
    char currency = '$';

    std::cout << grade << '\n';
    std::cout << initial << '\n';
    std::cout << currency << '\n';

    // boolean (true or false)
    bool student = true;
    bool power = true;
    bool forsale = false;

    std::cout << student << '\n';
    std::cout << power << '\n';
    std::cout << forsale << '\n';

    //string (object that represents a sequence of characters)
    std::string name = "Toan";
    std:: string day = "Monday";
    std:: string food = "Pizza";
    std:: string address = "123 cantho city";

    std::cout << name << '\n';
    std::cout << day << '\n';
    std::cout << food << '\n';
    std::cout << address << '\n';

    // -- LESSON 2: Constants -- //
    const double PI = 3.14159;
    // PI = 420.69;
    double radius = 10;
    double circumference = 2 * PI * radius;
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 800;
    const int HEIGHT = 600;

    std::cout << circumference << "cm" << '\n';

    // -- LESSON 3: Namespaces -- //

    int x = 0;
    x = 10;

    // using namespace std;
    using std::cout;
    using std::string;

    // -- LESSON 4: Type aliases -- //
    string name = "Toan";
    cout << name << '\n';

    std::cout << x << '\n';
    std::cout << first::x << '\n';
    std::cout << second::x << '\n';

    std::vector<std::pair<std::string, int>> pairlist;
    pairlist_t pairlist;

    text_t firstname = "Toan";
    number_t age = 19;

    std::cout << firstname << '\n';
    std::cout << age << '\n';

    return 0;
}