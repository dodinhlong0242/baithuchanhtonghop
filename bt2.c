#include <stdio.h>

int main() {
    float gioLam, luongtheogio, luongcoban, phucap, tongluong;
    printf("Nhap so gio lam viec trong thang: ");
    scanf("%f", &gioLam);
    printf("Nhap muc luong theo gio: ");
    scanf("%f", &luongtheogio);
    luongcoban = gioLam * luongtheogio;
    if (gioLam > 160) {
        phucap = luongcoban * 0.1;  
    } else {
        phucap = 0;  
    }
    tongluong = luongcoban + phucap;
    printf("Luong co ban: %.2f\n", luongcoban);
    printf("Phu cap: %.2f\n", phucap);
    printf("Tong luong: %.2f\n", tongluong);
    return 0;
}
