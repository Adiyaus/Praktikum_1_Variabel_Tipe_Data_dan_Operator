#include <stdio.h>
#include <math.h>

int main () {
    float alas = 5.0;
    float tinggi = 12.0;

    float SisiA = tinggi;
    float SisiB = sqrt(alas * alas + tinggi * tinggi );
    float SisiC = alas;

    float Keliling = SisiA + SisiB + SisiC;

    float Luas = 0.5 * alas * tinggi;

    printf("Diketahui:\n");
    printf("Alas = %.2f cm\n", alas);
    printf("tinggi = %.2f cm\n", tinggi);

    printf("\nJawaban:\n");
    printf("Sisi A = %.2f cm\n", SisiA);
    printf("Sisi B = %.2f cm\n", SisiB);
    printf("Sisi C = %.2f cm\n", SisiC);
    printf("Keliling = %.2f cm\n", Keliling);
    printf("Luas = %.2f c \n", Luas);

    return 0;
}