#include <stdio.h>

int main () {
    long long Jumlah_Pasukan_YZ = 958730;

    int Jumlah_Pahlawan = 5;

    long long Pasukan_Per_Pahlawan = Jumlah_Pasukan_YZ / Jumlah_Pahlawan;

    printf("Jumlah Pasukan yang dibawa Yu Zhong = %lld\n", Jumlah_Pasukan_YZ);
    printf("Jumlah Pahlawan = %d\n", Jumlah_Pahlawan);
    printf("Jumlah yang harus dikalahkan per pahlawan adalah %lld pasukan\n", Pasukan_Per_Pahlawan);

    return 0;
}