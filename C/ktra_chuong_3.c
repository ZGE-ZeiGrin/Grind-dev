#include <stdio.h>
#include <conio.h>

// void timMin(int a, int b, int c){
//     int nhoNhat = a;

//     if(b < nhoNhat) nhoNhat = b;
//     if(c < nhoNhat) nhoNhat = c;

//     printf("Gia tri nho nhat la: %d\n", nhoNhat);
// }

// void timMax(int a, int b, int c){
//     int lonNhat = a;

//     if(b > lonNhat) lonNhat = b;
//     if(c > lonNhat) lonNhat = c;

//     printf("Gia tri lon nhat la: %d\n", lonNhat);
// }

int Luythua(int a, int n, int kq){
    for(int j = 1; j <= n; j++){
        kq = kq * a;
    }

    return kq;
}

int Giaithua(int n, int kq){
    kq = 1;

    for(int i = 1; i <= n; i++){
        kq = kq * i;
    }

    return kq;
}

// void bcChuong(int n){
//     printf("----BANG CUU CHUONG %d----\n", n);
//     for(int i = 1; i <= 10; i++){
//         printf("%d x %d = %d\n", n, i, n * i);
//     }
// }

int main(){

    // Cau 1 CHUONG 3:

    // int a = 0;
    // int b = 0;
    // int c = 0;
    // int min = 1;
    // int max = 1; 

    // printf("Nhap so A: ");
    // scanf("%d", &a);

    // printf("Nhap so B: ");
    // scanf("%d", &b);

    // printf("Nhap so C: ");
    // scanf("%d", &c);

    // timMin(a, b, c);
    // timMax(a, b, c);

    // Cau 2 CHUONG 3:

    int a = 0;
    int n = 0;
    int i = 0;
    int kq = 1;
    int S1 = 0;
    int S2 = 0;

    printf("Nhap so A: ");
    scanf("%d", &a);

    printf("Nhap so N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
    S1 = S1 + Giaithua(i, 1);
    S2 = S2 + Luythua(i + 1, i, 1);
    }

   printf("Tong cua S1 la: %ld\n", S1);
   printf("Tong cua S2 la: %ld\n", S2);


    // Cau 3 CHUONG 3:

    // int n_cuuchuong = 0;

    // printf("\nNhap bang cuu chuong muon in: ");
    // scanf("%d", &n_cuuchuong);

    // bcChuong(n_cuuchuong);

    return 0;
}