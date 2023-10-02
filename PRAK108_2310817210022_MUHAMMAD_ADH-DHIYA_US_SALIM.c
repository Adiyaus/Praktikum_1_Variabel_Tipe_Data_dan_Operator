#include <stdio.h>

int main () {
    int Jumlah_Putaran = 5;

    float Jarak_Tempuh = 14;

    float Jari_Jari_Taman = Jarak_Tempuh / (2 * 3.14159265359 * Jumlah_Putaran);

    printf("Diketahui:\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", Jumlah_Putaran);
    printf("Jarak tempuh Pak Dengkelk = %.2f Kilometer\n", Jarak_Tempuh);

    printf("\nJawaban:\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %2f Kilometer", Jari_Jari_Taman);

    return 0;
}