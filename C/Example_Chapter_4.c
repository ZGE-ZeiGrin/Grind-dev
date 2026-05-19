#include <stdio.h>
#include <math.h>

// void nhap(int z[], char ten);
// void xem(int z[], char ten);
// void tong(int a[], int b[]);
// float module(int c[]);

int main(){

    // EXAMPLE 1: Array

    // int x[3];
    // int y[3];

    // nhap(x, 'x');
    // nhap(y, 'y');

    // xem(x, 'x');
    // xem(y, 'y');

    // tong(x,y);

    // printf("\n Module cua vecto 3 chieu x = %6.2f", module(x));
    // printf("\n Module cua vecto 3 chieu y = %6.2f", module(y));

    // EXAMPLE 2: 2D Array

    // int a[2][3] = {{1,2,3},
    //                {4,5,6}};

    // printf("\n");

    // for(int i = 0; i < 2; i++){
    //     for(int j = 0; j < 3; j++){
    //         printf("%d \t", a[i][j]);
    //     }
    //     printf("\n");
    // }

    // EXAMPLE 3:

    int m = 0;
    int n = 0;
    int a[10][10];

    printf("\n Nhap so hang va so cot cua ma tran: ");
    scanf("%d %d", &m, &n);

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("Nhap a[%d][%d]", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// void nhap(int z[], char ten){
//     for(int i = 0; i < 3; i++){
//         printf("%c[%d] = ", ten, i);
//         scanf("%d", &z[i]);
//     }
// }

// void xem(int z[], char ten){
//     printf("\n %c = (%d, %d, %d)", ten, z[0], z[1], z[2]);
// }

// void tong(int a[], int b[]){
//     int t[3];

//     for(int i = 0; i < 3; i++){
//         t[i] = a[i] + b[i];
//     }
//     printf("\nTong x + y la: ");
//     xem(t, 't');
// }

// float module(int c[]){
//     float s = 0;
//     for(int i = 0; i < 3; i++){
//         s = s + c[i] * c[i];
//     }
//     return sqrt(s);
// }