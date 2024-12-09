#include<stdio.h>

/*
    Hàm inCacPhanTuTrongMang in ra tat ca cac phan tu trong mang.
    Tham so:
        - arr: mang so nguyen
        - size: su ly phan tu trong mang 
*/
void inCacPhanTuTrongMang(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("phan tu thu %d la %d\n", i + 1, arr[i]);
    }
}

int main() {
    // Khoi tao mang
    int number[] = {1, 2, 3, 4, 5};
    int size = sizeof(number) / sizeof(number[0]); // Tính s? lý?ng ph?n t? trong m?ng

    // Goi ham inCacPhanTuTrongMang
    inCacPhanTuTrongMang(number, size);

    return 0;
}


