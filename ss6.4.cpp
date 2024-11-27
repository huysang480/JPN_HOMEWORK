#include <stdio.h>
int main() {
    float a, b, c;
    float delta, x1, x2;
    printf("Nh?p h? s? a: ");
    scanf("%f", &a);
    printf("Nh?p h? s? b: ");
    scanf("%f", &b);
    printf("Nh?p h? s? c: ");
    scanf("%f", &c);
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phýõng tr?nh vô s? nghi?m.\n");
            } else {
                printf("Phýõng tr?nh vô nghi?m.\n");
            }
        } else {
            x1 = -c / b;
            printf("Phýõng tr?nh có m?t nghi?m: x = %.2f\n", x1);
        }
    } else {
        delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf("Phýõng tr?nh vô nghi?m.\n");
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phýõng tr?nh có nghi?m kép: x1 = x2 = %.2f\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phýõng tr?nh có hai nghi?m phân bi?t:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }

    return 0;
}

