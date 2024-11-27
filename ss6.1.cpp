#include <stdio.h>

int main() {
    int numbers[5];
    int odd_sum = 0;
    printf("Nh?p vào 5 s? nguyên:\n");
    for (int i = 0; i < 5; i++) {
        printf("S? th? %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) {
            odd_sum += numbers[i];
        }
    }
    printf("T?ng các s? l? là: %d\n", odd_sum);

    return 0;
}

