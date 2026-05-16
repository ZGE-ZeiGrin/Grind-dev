// DAY 15 LEARNING C PROGRAMMING

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    // LESSON 31: Array of Strings

    // char fruit[][10] = {"Apple",
    //                     "Banana",
    //                     "Coconut",
    //                     "Pineapple",
    //                     "Lemon"};

    // int size = sizeof(fruit) / sizeof(fruit[0]);

    // fruit[0][0] = 'e';
    // fruit[0][4] = 'A';

    // fruit[1][0] = 'a';
    // fruit[1][5] = 'B';

    // fruit[2][0] = 't';
    // fruit[2][6] = 'C';

    // char fruit[][10] = {
    //     {'A', 'p', 'p', 'l', 'e', '\0', '\0', '\0', '\0'},
    //     {'B', 'a', 'n', 'a', 'n', 'a', '\0', '\0', '\0', '\0'},
    //     {'C', 'o', 'c', 'o', 'n', 'u', 't', '\0', '\0', '\0'}
    // };

    // for(int i = 0; i < 3; i++){
    //     printf("%s\n", fruit[i]);
    // }

    // for(int i = 0; i < size; i++){
    //     printf("%s\n", fruit[i]);
    // }

    // EXERRCISE ARRAY OF STRINGS

    // char names[4][25] = {0};
    // int rows = sizeof(names) / sizeof(names[0]);

    // printf("Enter a name: ");
    // fgets(names[0], sizeof(names[0]), stdin);
    // names[0][strlen(names[0]) - 1] = '\0';

    // printf("Enter a name: ");
    // fgets(names[1], sizeof(names[1]), stdin);
    // names[1][strlen(names[1]) - 1] = '\0';

    // printf("Enter a name: ");
    // fgets(names[2], sizeof(names[2]), stdin);
    // names[2][strlen(names[2]) - 1] = '\0';

    // for(int i = 0; i < 4; i++){
    //     printf("Enter a name: ");
    //     fgets(names[i], sizeof(names[i]), stdin);
    //     names[i][strlen(names[i]) - 1] = '\0';
    // }

    // for(int i = 0; i < rows; i++){
    //     printf("Enter a name: ");
    //     fgets(names[i], sizeof(names[i]), stdin);
    //     names[i][strlen(names[i]) - 1] = '\0';
    // }

    // printf("%s\n", names[0]);
    // printf("%s\n", names[1]);
    // printf("%s\n", names[2]);

    // for(int i = 0; i < 4; i++){
    //     printf("%s\n", names[i]);
    // }

    // for(int i = 0; i < rows; i++){
    //     printf("%s\n", names[i]);
    // }

    // LESSON 32: QUIZ GAME

    char questions[][100] = {"What is the largest planet in the solar system?",
                            "What is the hottest planet?",
                            "What planet has the most moons?",
                            "Is this Earth flat?"};

    char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune",
                           "A. Mercury\nB. Venus\nC. Earth\nD. Mars",
                           "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn",
                           "A. Yes\nB. No\nC. Mabye\nD. Sometimes"};

    char answerKey[] = {'A', 'B', 'D', 'B'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char gues = '\0';
    int score = 0;

    printf("*** QUIZ GAME ***\n");

    for(int i = 0; i < questionCount; i++){
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        printf("\nEnter your choice: ");
        scanf(" %c", &gues);

        gues = toupper(gues);

        if(gues == answerKey[i]){
            printf("CORRECT!\n");
            score++;
        }
        else{
            printf("WRONG!\n");
        }
    }

    printf("\nYour score is %d out of %d points\n", score, questionCount);

    // printf("%s\n", questions[0]);
    // printf("%s\n", options[0]);
    // printf("%c", answerKey[0]);

    return 0;
}