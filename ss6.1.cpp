#include <stdio.h>

int main() {
    int numbers[5];
    int odd_sum = 0;
    printf("Nh?p v�o 5 s? nguy�n:\n");
    for (int i = 0; i < 5; i++) {
        printf("S? th? %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) {
            odd_sum += numbers[i];
        }
    }
    printf("T?ng c�c s? l? l�: %d\n", odd_sum);

    return 0;
}

