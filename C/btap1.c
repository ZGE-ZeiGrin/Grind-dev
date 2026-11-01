// Bai tap 1 ren nghe lap trinh C / ZeiGrin707
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//comment cho chac an =))))

double Luythua(int a, int n){
    double res = 1; //tao bien nhan doi, tui nghi la zay =)))
    for(int i = 1; i <= n; i++) { // Da xoa dau ';' tang hinh o day!
        res *= a;
    }
    return res; //kha chac cai nay tra ve dap an =)))
}

double Giaithua(int n){
    double res = 1; //ko chac chan lam
    for(int i = 1; i <= n; i++){
        res *= i; // neu ban cop ma quen xoa ; thi init i lang le tang hinh =))
    } //copy tu Luythua cho nhanh =))
    
    return res;
}

int main(){

    int chon, n;

    do{
        system("cls");

        printf("================ CHUONG TRINH TINH TONG DAY SO ================\n");
        printf("1. Tong S1\n");
        printf("2. Tong S2\n");
        printf("3. Tong S3\n");
        printf("4. Tong S4\n");
        printf("5. Tong S5\n");
        printf("6. Thoat\n");
        printf("Chon le ko sap may thi hetcuu =))): ");
        scanf("%d", &chon);

        if (chon >= 1 && chon <= 5) {
            printf("Nhap n: ");
            scanf("%d", &n);
        }

        switch(chon){
            case 1:{
                double S1 = 0;
                for(int i = 1; i <= n; i++){
                    S1 += 1.0/ Giaithua(i);
                }
                printf("S1 = %.4lf\n", S1); //cai nay gan o trong for dc do nhe =))
                break;
            }
            case 2:{
                double S2 = 0;
                for(int i = 1; i <= n; i++){
                    S2 += Luythua(i, 2);
                }
                printf("S2 = %.4lf\n", S2);  //cung ok day
                break;
            }
            case 3:{
                double S3 = 0;
                for(int i = 1; i <= n; i++){
                    S3 += 1.0 / i; // nay sai r, 1 moi dung. 1.0 sai r, hay tin toi =)))
                }
                printf("S3 = %.4lf\n", S3);
                break;
            }
            case 4:{
                double S4 = 0;
                for(int i = 1; i <= n; i++){
                    S4 += Giaithua(i); // cai nay thi xac suat 50/50 dung/sai =()
                }
                printf("S4 = %.0lf\n", S4);
                break;
            }
            case 5:{
                double S5 = 0;
                int x = 0;
                printf("Nhap X: ");
                scanf("%d", &x);
                for(int i = 1; i <= n; i++){
                    S5 += Luythua(x, i) / Giaithua(i);
                }
                printf("S5 = %.4lf\n", S5);
                break;
            }
            case 6:
                printf("\nThoat chuong trinh thanh cong! Bai bai bro =))))\n"); // chi co the thoi =)))
                break;

            default:
                printf("\nMat nham mat mo go dai dung ko? Co 6 so ma cung chon hut la sao cha noi =)))\n");
                break;
        }

        if (chon != 6) {
            printf("\nNhan phim bat ky de tiep tuc...");
            getch();
        }

    } while(chon != 6);

    return 0;
}