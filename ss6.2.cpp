#include <stdio.h>

int main() {
    int so, dem_chan = 0, dem_le = 0;
    for (int i = 1; i <= 5; i++) {
        printf("Nh?p s? th? %d: ", i);
        scanf("%d", &so);
        if (so % 2 == 0) {
            dem_chan++;
        } else {
            dem_le++;
        }
    }
    printf("S? lý?ng s? ch?n: %d\n", dem_chan);
    printf("S? lý?ng s? l?: %d\n", dem_le);

    return 0;
}

