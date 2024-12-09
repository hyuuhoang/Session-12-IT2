#include<stdio.h>

int timSoLonNhat(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;

    printf("nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("so phan tu khong hop le.\n");
        return 1;
    }

    int arr[n];
    
    printf("nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("Ph?n t? th? %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int max = timSoLonNhat(arr, n);
    
    printf("so lon nhat trong mang la: %d\n", max);
    
    return 0;
}

