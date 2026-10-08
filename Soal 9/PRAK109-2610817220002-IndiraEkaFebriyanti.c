#include <stdio.h>

int main() {
    int pasukan, pahlawan, pasukan_dikalahkan;

    pasukan = 958730;
    pahlawan = 5;

    pasukan_dikalahkan = pasukan / pahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukan);
    printf("Jumlah pahlawan = %d\n", pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", pasukan_dikalahkan);

    return 0;
}