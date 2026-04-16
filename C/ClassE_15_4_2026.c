#include <stdio.h>
#include <conio.h>

int SLN;
int SNN;
int USCL;
int BSCN;

int main(){

    int a = 0;
    int b = 0;
    int c = 0;
    int sl = 0;
    int sn = 0;
    int us = 0;
    int bs = 0;

    printf("Nhap a: ");
    scanf("%d", &a);

    printf("Nhap b: ");
    scanf("%d", &b);

    printf("Nhap c: ");
    scanf("%d", &c);

    sl = SLN(a, SLN(b,c));
    sn = SNN(a, SNN(b,c));
    us = USCL|(a, USCL|(b,c));
    bs = BSCN|(a, BSCN|(b,c));

    printf("So lon nhat = %d\n", sl);
    printf("So nho nhat = %d\n", sn);
    printf("Uoc so chung lon nhat = %d", us);
    printf("Boi so chung nho nhat = %d\n", bs);

    getch();

    return 0;
}
int USCLN(x, y){
    do{
        if(x > y)
            x = x - y;
        else{
            y = y - x;
        }
    }
    while(x != y);

    return(x);
}
int BSCNN(x, y){
    
    int bc;
    int bs;
    int cs;

    if(x > y){
        cs = x;
    }
    else{
        cs = y;
    }
    bc = cs;
    while((bc % x != 0) || (bc % y != 0));
        bc = bc + cs;
    
    return(bc);
}
int SLN(x, y){
    if(x > y){
        return(x);
    }
    else{
        return(y);
    }
}
int SNN(x, y){
    if(x > y){
        return(x);
    }
    else{
        return(y);
    }
}