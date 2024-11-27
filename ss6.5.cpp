#include <stdio.h>

int main() {
    int nam, thang;
    int so_ngay;
    printf("Nh?p n�m: ");
    scanf("%d", &nam);
    printf("Nh?p th�ng: ");
    scanf("%d", &thang);
    if (thang < 1 || thang > 12) {
        printf("Th�ng kh�ng h?p l?!\n");
        return 1;
    }
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
        so_ngay = 31;
    } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        so_ngay = 30;
    } else {
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
            so_ngay = 29;
        } else {
            so_ngay = 28;
        }
    }
    printf("Th�ng %d n�m %d c� %d ng�y.\n", thang, nam, so_ngay);

    return 0;
}

