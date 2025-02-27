#include <stdio.h>

void print_factors(int n) {
    if (n < 1) {
        printf("Đối số không hợp lệ");
        return;
    }
    int i;
    printf("Các ước số của %d là: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void prime_factors(int n) {
    if (n < 1) {
        printf("Đối số không hợp lệ");
        return;
    }
    int i = 2;
    printf("Thừa số nguyên tố của %d là: ", n);
    while (i <= n) {
        if (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        } else {
            i++;
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhập một số nguyên: ");
    if (scanf("%d", &n) != 1) {
        printf("Đối số không hợp lệ");
        return 1;
    }
    print_factors(n);
    prime_factors(n);
    return 0;
}