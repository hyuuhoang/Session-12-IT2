#include<stdio.h>

long long tinhGiaiThua(int n) {
    if (n < 0) {
        printf("khong the tinh giai thua cua mot so am .\n");
        return -1; // tra ve gia tri dac biet neu la so am 
    }
    long long giaiThua = 1;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    return giaiThua;
}

int main() {
    int n;
    
    printf("nhap mot so nguyen : ");
    scanf("%d", &n);
    
    long long ketQua = tinhGiaiThua(n);
    
    if (ketQua != -1) {
        printf("giai thua cua %d la: %lld\n", n, ketQua);
    }
    
    return 0;
}

