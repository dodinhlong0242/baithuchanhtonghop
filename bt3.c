#include <stdio.h>

int main() {
    int luaChon;
    float sotien, ketqua;
    printf("==============CHUONG TRINH CHUYEN DOI TIEN TE=============\n");
    printf("1. USD to VND\n");
    printf("2. EUR to VND\n");
    printf("3. GBP to VND\n");
    printf("4. JPY to VND\n");
    printf("5. VND to USD\n");
    printf("6. VND to EUR\n");
    printf("7. VND to GBP\n");
    printf("8. VND to JPY\n");
    printf("Nhap don vi tien te ban muon chuyen doi (1-8): ");
    scanf("%d", &luaChon);
    printf("Nhap so tien can chuyen doi: ");
    scanf("%f", &sotien);
    switch (luaChon) {
        case 1: 
            ketqua = sotien * 23500;
            printf("%.2f USD = %.2f VND\n", sotien, ketqua);
            break;
        case 2: 
            ketqua = sotien * 25000;
            printf("%.2f EUR = %.2f VND\n", sotien, ketqua);
            break;
        case 3: 
            ketqua = sotien * 28000;
            printf("%.2f GBP = %.2f VND\n", sotien, ketqua);
            break;
        case 4: 
            ketqua = sotien * 180;
            printf("%.2f JPY = %.2f VND\n", sotien, ketqua);
            break;
        case 5:
            ketqua = sotien / 23500;
            printf("%.2f VND = %.2f USD\n", sotien, ketqua);
            break;
        case 6: 
            ketqua = sotien / 25000;
            printf("%.2f VND = %.2f EUR\n", sotien, ketqua);
            break;
        case 7: 
            ketqua = sotien / 28000;
            printf("%.2f VND = %.2f GBP\n", sotien, ketqua);
            break;
        case 8: 
            ketqua = sotien / 180;
            printf("%.2f VND = %.2f JPY\n", sotien, ketqua);
            break;
        default:
            printf("Lua chon khong hop le. Vui long chon lai tu 1 den 8.\n");
            break;
    }

    return 0;
}
