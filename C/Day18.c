// DAY 18 LEARNING C PROGRAMMING
#include <stdio.h>

// typedef struct{
//     char model[25];
//     int year;
//     int price;
// }Car;

// void birthday(int* age);

int main(){

    // LESSON 37: Array of Structs (old lesson)

    // Car cars[] = {{"Mustang", 2025, 32000},
    //                {"Corvette", 2026, 68000},
    //                {"Challenger", 2024, 29000}};

    // int number = sizeof(cars) / sizeof(cars[0]);

    // for(int i = 0; i < number; i++){
    //     printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
    // }

    // Car car1 = {"Mustang", 2025, 32000};
    // Car car2 = {"Corvette", 2026, 68000};
    // Car car3 = {"Challenger", 2024, 29000};

    // printf("%s %d $%d\n", car1.model, car1.year, car1.price);
    // printf("%s %d $%d\n", car2.model, car2.year, car2.price);
    // printf("%s %d $%d\n", car3.model, car3.year, car3.price);

    // LESSON 38: Pointers

    // int age = 19;
    // int *pAge = &age;

    // printf("%p", &age);
    // printf("%p\n", &age);
    // printf("%p\n", pAge);

    // birthday(age);
    // birthday(pAge);

    // printf("You are %d years old", age);

    // LESSON 39: Write files

    // FILE *pFile = fopen("output.txt", "w");
    FILE *pFile = fopen("C:\\Users\\Toan\\Desktop\\output.txt", "w");

    char text[] = "AYOOO, WHAT UP!!!!";

    if(pFile == NULL){
        printf("Error opening file\n");
        return 1;
    }

    fprintf(pFile, "%s", text);

    printf("File was written successfully!\n");

    fclose(pFile);

    return 0;
}

// void birthday(int* age){
//     // pass by reference
//     (*age)++;
// }