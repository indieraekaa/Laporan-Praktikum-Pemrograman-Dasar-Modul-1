#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, K, L;

    a = 12;
    c = 5;

    b = sqrt(pow(a, 2) + pow(c, 2));
    
    K = a + b + c;
    L = (a * c) / 2;

    printf("Diketahui: \n");
    printf("Alas = %d cm\n", c);
    printf("Tinggi = %d cm\n\n", a);
    
    printf("Jawab: \n");
    printf("Sisi A = %d cm\n", a);
    printf("Sisi B = %d cm\n", b);
    printf("Sisi C = %d cm\n", c);
    printf("Keliling = %d cm\n", K);
    printf("Luas = %d cm\n", L);

    return 0;
}