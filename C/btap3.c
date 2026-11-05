// bai tap 3: ren nghe C chuong 2
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

// nhap array 1 chieu
void Nhap_Array(int a[], int *n){
    printf("Nhap n: ");
    scanf("%d", n);
    for(int i = 0; i < *n; i++){
        printf("Nhap A: ");
        scanf("%d", &a[i]);
    }
}

// in array 1 chieu
void In_Array(int a[], int n){
    printf("Cac phan tu trong mang: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

// tinh trung binh cac phan tu
double Trungbinh_Array(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }

    return (double)sum / n;
}

// sap xep mang tang dan
void Sapxep_Array(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// phan tu lon nhat
int Max_Array(int a[], int n){
    int max = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > max) max = a[i];
    }
    return max;
}

// ham phu
int isPrime(int val){
    if(val < 2){
        return 0;
    }
    for(int i = 2; i <= sqrt(val); i++){
        if(val % i == 0){
            return 0;
        }
    }
    return 1;
}

// dem so luong so nguyen to
int Dem_nguyento(int a[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(isPrime(a[i])){
            count++;
        }
    }
    return count;
}

// dem so lan xuat hien cua x
int Timkiem(int a[], int n, int x){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            count++;
        }
    }
    return count;
}

// dem so phan tu khac nhau
int Dem_pt_khac(int a[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        int isUnique = 1;
        for(int j = 0; j < i; j++){
            if(a[i] == a[j]){
                isUnique = 0;
                break;
            }
        }
        if(isUnique == 1){
            count++;
        }
    }
    return count;
}

//chen phan tu x vao vi tri k
void Insert_array(int a[], int *n, int x, int k){
    if(k < 0 || k > *n){
        printf("k sai vi tri roi!!\n");
        return;
    }
    for(int i = *n; i > k; i--){
        a[i] = a[i - 1];
    }
    a[k] = x;
    (*n)++;
}

// xoa tat ca phan tu trung voi x
int Delete_Array(int a[], int *n, int x){
    int found = 0;
    for(int i = 0; i < *n; i++){
        if(a[i] == x){
            found = 1;

            for(int j = i; j < *n - 1; j++){
                a[j] = a[j + 1];
            }
            (*n)--;
            i--;
        }
    }
    return found;
}

int main(){

    int a[100];
    int n = 0;
    int chon;
    int x;
    int y;
    int k;

    do {
        system("cls");
        printf("================ CHUONG TRINH QUAN LY MANG MOT CHIEU ================\n");
        printf("1. Nhap mang mot chieu\n");
        printf("2. In mang mot chieu\n");
        printf("3. Tinh trung binh cac phan tu\n");
        printf("4. Sap xep mang tang dan\n");
        printf("5. Xuat phan tu lon nhat\n");
        printf("6. Dem so luong so nguyen to\n");
        printf("7. Dem so lan xuat hien cua x\n");
        printf("8. Dem so phan tu khac nhau\n");
        printf("9. Chen phan tu x vao vi tri k\n");
        printf("10. Xoa tat ca phan tu trung voi x\n");
        printf("11. Thoat\n");
        printf("Ban chon muc nao: ");
        scanf("%d", &chon);

        switch(chon){
            case 1:
                Nhap_Array(a, &n);
                printf("Da nhap xong mang  %d phan tu!\n", n);
            break;
            case 2:
                In_Array(a, n);
            break;
            case 3:
                printf("Trung binh cong cac phan tu: %.2f\n", Trungbinh_Array(a, n));
            break;
            case 4:
                Sapxep_Array(a, n);
                printf("Da sap xep mang tang dan!\n");
                In_Array(a, n);
            break;
            case 5:
                printf("Phan tu lon nhat trong mang: %d\n", Max_Array(a, n));
            break;
            case 6:
                printf("so luong so nguyen to trong mang: %d\n", Dem_nguyento(a, n));
            break;
            case 7:
                printf("Nhap gia tri x can dem: ");
                scanf("%d", &x);
                printf("So %d xuat hien %d lan trong mang.\n", x, Timkiem(a, n, x));
            break;
            case 8:
                printf("so luong phan tu khac nhau (doc nhat): %d\n", Dem_pt_khac(a, n));
            break;
            case 9:
                printf("Nhap gia tri x can chen: ");
                scanf("%d", &x);
                printf("Nhap vi tri k can chen (0 -> %d): ", n);
                scanf("%d", &k);
                Insert_array(a, &n, x, k);
                printf("Da chen %d vao vi tri %d!\n", x, k);
            break;
            case 10:
                printf("Nhap gia tri x can xoa: ");
                scanf("%d", &x);
                if(Delete_Array(a, &n, x)) {
                    printf("Da xoa tat ca phan tu %d khoi mang!\n", x);
                }
                else{
                    printf("khong tim thay %d trong mang!\n", x);
                }
            break;
            case 11:
                printf("Da thoat chuong trinh. bien cho khac de!!!\n");
            break;
            default:
            printf("\nChon the thi chiu r, chon lai de");
            break;
        }

        if(chon != 11){
            printf("\nNhan phim bat ky de tiep tuc, vi du Ctrl + C");
            getch();
        }
    } while(chon != 11);

    return 0;
}