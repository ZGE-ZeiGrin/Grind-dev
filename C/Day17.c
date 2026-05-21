// DAY 17 LEARING C PROGRAMMING
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// typedef enum{
//     SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4, THURSDAY = 5,
//     FRIDAY = 6, SATURDAY = 7
// }Day;

// typedef enum{
//     SUCCESS, FAILURE, PENDING
// }Status;

// void connectStatus(Status status);

// typedef struct{
//     char name[50];
//     int age;
//     float gpa;
//     bool isFullTime;
// }Student;

// void printStudent(Student student);

typedef struct{
    char model[25];
    int year;
    int price;
}Car;

int main(){

    // LESSON 35: Enums

    // Day today = SUNDAY;

    // printf("%d", today);

    // if(today == SUNDAY || today == SATURDAY){
    //     printf("It's the weekend");
    // }
    // else{
    //     printf("It's a weekday");
    // }

    // Status status = PENDING;

    // connectStatus(status);

    // LESSON 36: Structs

    // Student student1 = {"Grind", 19, 3.4, true};
    // Student student2 = {"Zenith", 19, 2.5, false};
    // Student student3 = {"Zenk", 19, 1.5, false};
    // Student student4 = {0};

    // strcpy(student4.name, "ZeiGrin");
    // student4.age = 20;
    // student4.gpa = 4.0;
    // student4.isFullTime = true;

    // printf("%s\n", student1.name);
    // printf("%d\n", student1.age);
    // printf("%.2f\n", student1.gpa);
    // printf("%s\n", (student1.isFullTime) ? "Yes" : "No");

    // printf("%s\n", student2.name);
    // printf("%d\n", student2.age);
    // printf("%.2f\n", student2.gpa);
    // printf("%s\n", (student2.isFullTime) ? "Yes" : "No");

    // printf("%s\n", student3.name);
    // printf("%d\n", student3.age);
    // printf("%.2f\n", student3.gpa);
    // printf("%s\n", (student3.isFullTime) ? "Yes" : "No");

    // printf("%s\n", student4.name);
    // printf("%d\n", student4.age);
    // printf("%.2f\n", student4.gpa);
    // printf("%s\n", (student4.isFullTime) ? "Yes" : "No");

    // printStudent(student1);
    // printStudent(student2);
    // printStudent(student3);
    // printStudent(student4);

    // LESSON 37: Array of Structs

    Car cars[] = {{"Lamborghini", 2025, 49600},
                  {"BMW", 2025, 14100},
                  {"Vinfast", 2025, 20000}};

    // Car car1 = {"Lamborghini", 2025, 49600};
    // Car car2 = {"BMW", 2025, 14100};
    // Car car3 = {"Vinfast", 2025, 20000};

    int number = sizeof(cars) / sizeof(cars[0]);

    for(int i = 0; i < number; i++){
        printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
    }

    // printf("%s %d $%d\n", car1.model, car1.year, car1.price);
    // printf("%s %d $%d\n", car2.model, car2.year, car2.price);
    // printf("%s %d $%d\n", car3.model, car3.year, car3.price);

    return 0;
}

// void connectStatus(Status status){
//     switch(status){
//         case SUCCESS:
//             printf("Connection was successful\n");
//             break;
//         case FAILURE:
//             printf("Could not connect\n");
//             break;
//         case PENDING:
//             printf("Connecting...\n");
//             break;
//     }
// }

// void printStudent(Student student){
//     printf("Name: %s\n", student.name);
//     printf("Age: %d\n", student.age);
//     printf("GPA: %.2f\n", student.gpa);
//     printf("Full-time: %s\n", (student.isFullTime) ? "Yes" : "No");
//     printf("\n");
// }