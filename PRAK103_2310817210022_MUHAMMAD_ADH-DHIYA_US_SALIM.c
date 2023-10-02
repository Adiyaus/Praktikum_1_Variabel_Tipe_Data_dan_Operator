#include <stdio.h>

int main () {
    int a = 9;
    int b = 6;
    int x = 10;
    int y = 7;

    float hasil = ((float)(a + b) * x ) / y;

    printf("a variable%d\n", a);
    printf("b variable%d\n", b);
    printf("x variable%d\n", x);
    printf("y variable%d\n", y);
    printf("Hasil dari a di tambah b dikali x dan dibagi y %.2f\n", hasil);

    return 0;
}