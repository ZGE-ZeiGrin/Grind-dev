#include <stdio.h>
#include <stdlib.h>

int main(){

    // EXAMPLE 1:

    // int A = 200;
    // int *p;
    // int X = 0;

    // p = &A;
    // X = *p;

    // printf("\nDia chi A: %p     \t noi dung A: %d", &A, A);
    // printf("\nDia chi dc:%p     \t noi dung dc: %X(hex)", &p,p);
    // printf("\nDia chi X: %p     \t noi dung X: %d", &X, X);

    // EXAMPLE 2:

    // float x = 3.14;
    // float y = 0;
    
    // float *p;
    // p = &x;

    // y = *p;

    // printf("\nGia tri cua y: %6.2f", y);

    // EXAMPLE 3:

    // int *p1;
    // int *p2;
    // int x = 10;

    // p1 = &x;
    // p2 = p1;

    // printf("\n Dia chi x: %p     \t Gia tri x: %d", &x,x);
    // printf("\n p1 chua noi dung: %p \t p1 tro toi gia tri: %d", p1, *p1);
    // printf("\n p2 chua noi dung: %p \t p2 tro toi gia tri: %d", p2, *p2);

    // EXAMPLE 4:

    // int x = 500;
    // int *p1;
    // int *p2;
    // int *p3;

    // p1 = &x;

    // printf("\nDia chi p1: %p \t Co chua noi dung: %X \t Tro toi gia tri: %d", &p1, p1, *p1);

    // p2 = p1 + 1;
    // printf("\nDia chi p2: %p \t Co chua noi dung: %X \t Tro toi gia tri: %d", &p2, p2, *p2);

    // p3 = p1 - 1;
    // printf("\nDia chi p3: %p \t Co chua noi dung: %X \t Tro toi gia tri: %d", &p3, p3, *p3);

    // if(p2 > p3){
    //     printf("\nCon tro p2 chua dia chi lon hon con tro p3");
    // }

    // EXAMPLE 5:

    // int *p1;
    // int pb;
    // int i = 0;
    // int j = 0;

    // char *p2;
    // char ch;

    // p1 = &pb;
    // p2 = &ch;

    // printf("\nDia chi cua p1: %p - co noi dung: %p", &p1, p1);
    // printf("\nDia chi cua p2: %p - co noi dung: %p", &p2, p2);

    // printf("\nSau khi tang p1: ");
    // while(i < 5){
    //     printf("\nNoi dung cua p1: %p \t", p1);
    //     p1++;
    //     i++;
    // }

    // printf("\nSau khi tang p2: ");
    // while(j < 5){
    //     printf("\nNoi dung cua p2: %p", p2);
    //     p2++;
    //     j++;
    // }

    // EXAMPLE 6:

    // int m = 0;
    // int n = 0;
    // int *p;

    // m = 4;
    // n = *p;
    // *p = n + 5;

    // printf("\n m = %d. n = %d. p = %X.", m, n, p);

    // EXAMPLE 7:

    // int a[5] = {0, 10, 20, 30, 40};
    // int *p;
    // int x = 0;

    // for(int i = 0; i < 5; i++){
    //     p = a;
    //     x = *p;

    //     printf("\n x = *p --> Noi dung cua p = %X - x = %d ", p, x);
    //     p++;
    //     x = *p;

    //     printf("\n p++ --> Noi dung cua p = %X - x = %d ", p, x);
    //     x = *(p + 1);

    //     printf("\n x = *(p + 1) --> Noi dung cua p = %X - x = %d ", p, x);
    //     x = * ++p;

    //     printf("\n x = *++p --> Noi dung cua p = %X - x = %d ", p, x);
    //     x = ++ *p;
        
    //     printf("\n x = ++ *p --> Noi dung cua p = %X - x = %d ", p, x);
    //     x = *p ++;

    //     printf("\n x = *p ++ --> Noi dung cua p = %X - x = %d ", p, x);
    //     x = *p++;

    //     printf("\n x = *p++ --> Noi dung cua p = %X - x = %d ", p, x);
        
    // }

    return 0;
}