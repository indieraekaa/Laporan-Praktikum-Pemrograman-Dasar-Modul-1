#include <stdio.h>

int main() {
    int sepatu_A, sepatu_B, diskon_A, diskon_B, akhir_A, akhir_B;
    
    sepatu_A = 400000;
    sepatu_B = 350000;

    diskon_A = 13;
    diskon_B = 21;

    akhir_A = sepatu_A - (sepatu_A * diskon_A / 100);
    akhir_B = sepatu_B - (sepatu_B * diskon_B / 100);

    printf("Harga sepatu A adalah %d\n", sepatu_A);
    printf("Harga sepatu B adalah %d\n", sepatu_B);
    printf("Sepatu A mendapat diskon %d%% sehingga harganya menjadi %d\n", diskon_A,akhir_A);
    printf("Sepatu B mendapat diskon %d%% sehingga harganya menjadi %d\n", diskon_B, akhir_B);

    return 0;
}