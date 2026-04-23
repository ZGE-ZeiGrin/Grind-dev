#include <stdio.h>
#include <conio.h>

void doc(int s, int vtri);
int tram, chuc, dvi, so;

int main(){

    // Vi du 1

    // float hls = 0;
    // float pc = 0;
    // float lcb = 0;
    // float thuong = 0;
    // float bh = 0;
    // float tl = 0;

    // printf("\n Nhap he So Luong: ");
    // scanf("%f", &hls);
    // printf("\n Nhap so tien Thuong: ");
    // scanf("%f", &thuong);

    // lcb = hls * 290000;
    // bh = lcb * 0.06;
    // pc = 0.35 * lcb;
    // tl = lcb + pc + thuong - bh;

    // printf("\n Luong thuc lanh la: %12.2f", tl);
    // getch();

    // Vi du 2

    // int a = 0;
    // int b = 0;

    // printf("\n Nhap vao so bi chia a = ");
    // scanf("%d", &a);
    // printf("\n Nhap vao so chia b = ");
    // scanf("%d", &b);

    // if( b ==0){
    //     printf("\n So chia bang 0 khong chia duoc!!");
    // }
    // else{
    //     printf("\n Ket qua a/b == %f", (float) a/b);
    // }

    // Vi du 3

    // int diem = 0;

    // printf("Nhap diem cua ban: ");
    // scanf("%d", &diem);

    // if(diem < 5){
    //     printf("Hoc luc yeu.\n");
    // }
    // else if(diem < 7){
    //     printf("Hoc luc trung binh.\n");
    // }
    // else if(diem < 10){
    //     printf("Hoc luc gioi.\n");
    // }
    // else{
    //     printf("Ban chua nhap diem!!");
    // }

    // Vi du 4

    // int thang = 0;
    // int nam = 0;
    // int sn = 0;

    // printf("Nhap thang: ");
    // scanf("%d", &thang);

    // printf("Nhap nam: ");
    // scanf("%d", &nam);

    // printf("Nhap sn: ");
    // scanf("%d", &sn);

    // switch(thang){
    //     case 1:
    //     case 2:
    //     if(nam%4 == 0){
    //         sn = 29;
    //     }

    //     else{
    //         sn = 28;
    //         break;
    //     }
    //     case 3:
    //     case 4:
    //     case 5:
    //     case 6:
    //     case 7:
    //     case 8:
    //     case 9:
    //     case 10:
    //     case 11:
    //     case 12:
    //     sn = 31;
    //     break;
    //     default: sn = 30;
    // }
    // printf("\n Thang %d nam %d co %d ngay", thang, nam, sn);

    // getch();

    // Vi du 5

    // int i = 0;

    // printf("\n Bang cuu chuong 4\n");

    // for (i = 1 ; 1 <= 10 ; i++)

    // printf("\n 4 * %d = %d", i, 4 * i);

    // getch();

    // Vi du 6

    // int i = 100;
    // int tram = 0;
    // int chuc = 0;
    // int donvi = 0;
    // int dem = 0;

    // printf("\n So co tong 3 con so la 9: \n");

    // while(i <= 50){
    //     tram = i / 100;
    //     chuc = (i % 100) / 10;
    //     donvi = i % 10;

    //     if(tram + chuc + donvi == 9){
    //         dem++;
    //         printf("\t %d", i);
    //     }
    // }
    // printf("Co tong cong %d so\n", dem);
    // getch();

    // // Vi du 7

    // int a = 0;
    // int b = 0;

    // do{
    //     printf("Nhap gia tri cua A: \n");
    //     scanf("%d", &a);

    //     printf("Nhap gia tri cua B: \n");
    //     scanf("%d", &b);

    //     if(a == 0){
    //         printf("Nhap a = 0, nhap lai!\n");            
    //     }
    // }
    // while (a ==0);

    // printf("Nghiem cua phuong trinh la x = %6.2f", (float) - b / a);

    // getch();

    // Vi du 8

    int so = 0;
    int tram = 0;
    int chuc = 0;
    int dvi = 0;

    int s = 0;
    int vtri = 0;

    do{
        printf("Nhap so: ");
        scanf("%d", &so);
    }
    while((so < 100) || (so > 999));

    tram = so / 100;
    chuc = (so % 100) / 10;
    dvi = (so % 10);

    printf("So %d doc la: \n", so);

    doc(tram, 1);
    doc(chuc, 2);
    doc(dvi, 3);

    getch();

    // Vi du 9: co 2 truong hop
    // Truong hop 1

    // int i = 0;

    // for (i = 0; i <= 10; i++){
    //     if((i % 2) != 0){
    //         printf("\t%d", i);
    //         continue;
    //     }
    // }

    // Truong hop 2

//     i = 0;
    
//     while(i <= 10){
//         if((i % 2) != 0){
//             i++;
//             continue;
//         }
//         i++;
//     }
//     printf("\t%d", i);

//     return 0;
// }
//     void doc(int s, int vtri){

//     switch(s){
//         case 0:
//         if((vtri == 2) && (dvi == 0))
//             printf("chan \n");
        
//         else{
//             if(vtri == 3){
//                 printf("\t chan");
//             }
//             else{
//             printf("\t le");
//             break;
//         }
//         }
//         case 1:
//         if(vtri == 2){
//             printf("\t muoi");
//         }
//         else{
//             if((vtri == 3) && (s > 1)){
//                 printf("\t most");
//                 printf("\t mojt");
//                 break;
//             }
//         }
//         case 2:
//         printf("\t hai");
//         break;

//         case 3:
//         printf("\t ba");
//         break;

//         case 4:
//         printf("\t bon");
//         break;

//         case 5:
//         if((vtri == 3) && (chuc != 0)){
//             printf("\t lawm");
//         }
//         else{
//             printf("\t nawm");
//             break;
//         }

//         case 6:
//         printf("\t saus");
//         break;

//         case 7:
//         printf("\t bays");

//         case 8:
//         printf("\t tams");
//         break;

//         case 9:
//         printf("\t chins");
//         break;
//     }
//     if(vtri == 1){
//         printf("\t tramw");
//     }
//     else{
//         if(vtri == 2){
//             printf("\t muoiw");
//         }
//     }
//     }
