#include <stdio.h>
#include <stdlib.h>

void sort_integers(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Nhập số phần tử của danh sách: ");
    if (scanf("%d", &n) != 1) {
        printf("Đối số không hợp lệ");
        return 1;
    }
    int arr[n];
    int i;
    printf("Nhập các phần tử của danh sách:\n");
    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Phần tử %d không hợp lệ\n", i+1);
            arr[i] = 0;
            while(getchar() != '\n'); // Xóa bộ nhớ đệm
        }
    }
    sort_integers(arr, n);
    printf("Danh sách sau khi sắp xếp theo thứ tự tăng dần là:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}