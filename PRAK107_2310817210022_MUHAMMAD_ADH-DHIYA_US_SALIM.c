#include <stdio.h>

int main() {
    int Sisi_1 = 4;
    int Sisi_2 = 5;
    int Sisi_3 = 7;

    int Keliling_Tanah = Sisi_1 + Sisi_2 + Sisi_3;

    int Harga_Per_Meter = 85000;

    int Total = Keliling_Tanah * Harga_Per_Meter;

    printf("Diketahui:\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", Sisi_1, Sisi_2, Sisi_3);
    printf("Keliling tanah Pak Dengklek adalah %d\n", Keliling_Tanah);
    printf("Harga tanah Per Meter adalah %d\n", Harga_Per_Meter);

    printf("Jawaban:\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah %d\n", Total);

    return 0;
}