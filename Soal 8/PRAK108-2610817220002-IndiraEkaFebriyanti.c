#include <stdio.h>

int main() {
    float putaran, jarak_tempuh, keliling, pi, r;

    putaran = 5;
    jarak_tempuh = 14;

    keliling = jarak_tempuh / putaran;
    pi = 3.14;
    r = keliling / (2 * pi);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n\n", jarak_tempuh);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", r);
    
    return 0;
}