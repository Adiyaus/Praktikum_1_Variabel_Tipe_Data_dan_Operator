#include <stdio.h>

int main() {
    int SepatuA = 400000;
    int SepatuB = 350000;

    float diskonA = 0.13;
    float diskonB = 0.21;

    float HargaDiskonA = SepatuA - (SepatuA * diskonA);
    float HargaDiskonB = SepatuB - (SepatuB * diskonB);

    printf("Sepatu A berharga %d\n", SepatuA);
    printf("Sepatu B berharga %d\n", SepatuB);
    printf("Harga sepatu A setelah diskon: %.2f\n", HargaDiskonA);
    printf("Harga sepatu B setelah diskon: %.2f\n", HargaDiskonB);

    return 0;
}