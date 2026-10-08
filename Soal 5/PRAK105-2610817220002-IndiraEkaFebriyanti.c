#include <stdio.h>

int main() {
    int a, b, x, y, c, z, total;

    a = 9;
    b = 5;
    x = 8;
    y = 8;

    c = a % b;
    z = x % y;
    total = c + z;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", total);

    return 0;
}