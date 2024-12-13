#include <stdio.h>

int main() {
    int n, count = 0, num = 2, i;

    printf("Nhap v�o so nguyen duong n: ");
    scanf("%d", &n);

    printf("N %d s? nguy�n to dau ti�n l�:\n", n);
    
    while (count < n) {
       
        int is_prime = 1; 
        
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0;  
                break;
            }
        }
        
        if (is_prime) {
            printf("%d ", num);
            count++;
        }
        
        num++;
    }

    return 0;
}

