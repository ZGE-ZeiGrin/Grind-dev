// bai tap 2: ren nghe C - ZeiGrin707
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1415926535

// tinh chu vi

double TINHCV_HT(int r){
    return 2 * PI * r;
}

double TINHCV_HV(int canh){
    return 4 * canh;
}

double TINHCV_HCN(int d, int r){
    return (d + r) * 2;
}

double TINHCV_HTG(int c1, int c2, int c3){
    return c1 + c2 + c3;
}

double TINHCV_MC(int r){
    return 2 * PI * r;
}

// tinh dien tich

double TINHDT_HT(int r){
    double s = PI * r * r;
    return s;
}

double TINHDT_HV(int canh){
    double s = canh * canh;
    return s;
}

double TINHDT_HCN(int d, int r){
    double s = d * r;
    return s;
}

double TINHDT_HTG(int c1, int c2, int c3){
    double p = (c1 + c2 + c3) / 2.0;
    return sqrt(p * (p - c1) * (p - c2) * (p - c3));
}

double TINHDT_MC(int r){
    double s = 4 * PI * r * r;
    return s;
}

// menu chu vi
void menuChuVi(){
    int chonCV;
    int r;
    int canh;
    int d;
    int c1;
    int c2;
    int c3;

    do {
        system("cls");

        printf("================ CHUONG TRINH TINH CHU VI ================\n");
        printf("1. HINH TRON\n");
        printf("2. HINH VUONG\n");
        printf("3. HINH CHU NHAT\n");
        printf("4. HINH TAM GIAC\n");
        printf("5. MAT CAU\n");
        printf("6. THOAT\n");
        printf("Ban chon muc nao: ");
        scanf("%d", &chonCV);

        switch(chonCV){
            case 1:
                //hinh tron
                printf("Nhap ban kinh r: ");
                scanf("%d", &r);
                printf("Chu vi hinh tron = %.2lf\n", TINHCV_HT(r));
            break;
            case 2:
                //hinh vuong
                printf("Nhap do dai canh");
                scanf("%d", &canh);
                printf("Chu vi hinh vuong = %.2lf\n", TINHCV_HV(canh));
            break;
            case 3:
                //hinh chu nhat
                printf("Nhap chieu dai: ");
                scanf("%d", &d);
                printf("Nhap chieu rong: ");
                scanf("%d", &r);
                printf("Chu vi hinh chu nhat = %.2lf\n", TINHCV_HCN(d, r));
            break;
            case 4:
                //hinh tam giac
                printf("Nhap canh c1: ");
                scanf("%d", &c1);
                printf("Nhap canh c2: ");
                scanf("%d", &c2);
                printf("Nhap canh c3: ");
                scanf("%d", &c3);
                printf("Chu vi hinh tam giac = %.2lf\n", TINHCV_HTG(c1, c2, c3));
            break;
            case 5:
                // mat cau
                printf("Nhap ban kinh r: ");
                scanf("%d", &r);
                printf("Chu vi hinh tron = %.2lf\n", TINHCV_MC(r));
            break;
            case 6:
                printf("\nQuay lai mennu chinh.....\n");

            break;
            default:
                printf("\nChon cai deo gi zay may???, chon lai cho tao\n");
            break;

        }

        if (chonCV != 6){
            printf("\nNhan phim bat ky de tiep tuc, vi du ctrl c");
            getch();
        }
    } while(chonCV != 6);
}

//menu dien tich

void menuDienTich(){
    int chonDT;
    int r;
    int canh;
    int d;
    int c1;
    int c2;
    int c3;

    do {
        system("cls");
        printf("================ CHUONG TRINH TINH DIEN TICH ================\n");
        printf("1. HINH TRON\n");
        printf("2. HINH VUONG\n");
        printf("3. HINH CHU NHAT\n");
        printf("4. HINH TAM GIAC\n");
        printf("5. MAT CAU\n");
        printf("6. THOAT\n");
        printf("Ban chon muc nao: ");
        scanf("%d", &chonDT);

        switch(chonDT){
            case 1:
                //hinh tron
                printf("Nhap ban kinh r: ");
                scanf("%d", &r);
                printf("dien tich hinh tron = %.2lf\n", TINHDT_HT(r));
            break;
            case 2:
                //hinh vuong
                printf("Nhap do dai canh");
                scanf("%d", &canh);
                printf("dien tich hinh vuong = %.2lf\n", TINHDT_HV(canh));
            break;
            case 3:
                //hinh chu nhat
                printf("Nhap chieu dai: ");
                scanf("%d", &d);
                printf("Nhap chieu rong: ");
                scanf("%d", &r);
                printf("dien tich hinh chu nhat = %.2lf\n", TINHDT_HCN(d, r));
            break;
            case 4:
                //hinh tam giac
                printf("Nhap canh c1: ");
                scanf("%d", &c1);
                printf("Nhap canh c2: ");
                scanf("%d", &c2);
                printf("Nhap canh c3: ");
                scanf("%d", &c3);
                printf("dien tich hinh tam giac = %.2lf\n", TINHDT_HTG(c1, c2, c3));
            break;
            case 5:
                // mat cau
                printf("Nhap ban kinh r: ");
                scanf("%d", &r);
                printf("dien tich hinh tron = %.2lf\n", TINHDT_MC(r));
            break;
            case 6:
                printf("\nQuay lai mennu chinh.....\n");

            break;
            default:
                printf("\nChon cai deo gi zay may???, chon lai cho tao\n");
            break;

        }

        if (chonDT != 6){
            printf("\nNhan phim bat ky de tiep tuc, vi du ctrl c");
            getch();
        }
    } while(chonDT != 6);
}

//menu chinh

int main(){

    int chonChinh;

    do {
        system("cls");
        printf("================ CHUONG TRINH CHU VI VA DIEN TICH ================\n");
        printf("1. TINH CHU VI\n");
        printf("2. TINH DIEN TICH\n");
        printf("3. THOAT\n");
        printf("Ban chon muc nao: ");
        scanf("%d", &chonChinh);

        switch(chonChinh){
            case 1:
                menuChuVi();
                break;
            case 2:
                menuDienTich();
                break;
            case 3:
                printf("\nThoat chuong trinh thanh cong! Bai bai bro =))))\n");
                break;
            default:
                printf("\nchon cai deo j day, co 3 cai ma nhap cai eo j the??!\n");
                break;
        }

        if (chonChinh != 3 && chonChinh >= 1 && chonChinh <= 2){
            //yeah, cho nay cha co cai moe j trong nay het
        }


    } while(chonChinh != 3);

    return 0;
}