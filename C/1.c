#include <stdio.h>
#include <conio.h>

int main(){

    int a = 0;
    int n = 0;
    int kq = 0;

    printf("Nhap so a: ");
    scanf("%d", &a);

    printf("Nhap so n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++ ){
        kq = kq * a;
    }

    printf("%d^%ld", n, a, kq);

    return 0;
}