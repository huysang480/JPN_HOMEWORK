#include <stdio.h>
int main() {
    char mat_khau_dung[] = "123456";
    char mat_khau_nhap[50];          
    printf("Nh?p m?t kh?u: ");
    scanf("%s", mat_khau_nhap);
    if (strcmp(mat_khau_dung, mat_khau_nhap) == 0) {
        printf("M?t kh?u ðúng!\n");
    } else {
        printf("M?t kh?u sai!\n");
    }

    return 0;
}

