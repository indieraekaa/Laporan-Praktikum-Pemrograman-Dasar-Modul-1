#include <stdio.h>

int main() {
    int a, b, x, y;
    float hasil;

    a = 9;
    b = 6;
    x = 10;
    y = 7;

    hasil = (float)(a + b) * x / y;

    printf("Variabel a adalah %d\n", a);
    printf("Variabel b adalah %d\n", b);
    printf("Variabel x adalah %d\n", x);
    printf("Variabel y adalah %d\n", y);
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n", hasil);

    return 0;
}