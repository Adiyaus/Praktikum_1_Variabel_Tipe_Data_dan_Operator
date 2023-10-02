#include <stdio.h>

int main() {
    int a = 4;
    int b = 8;
    int c = 3;
    
    float hasil = (float) (a * b) / c;

    printf("a variable%d\n", a);
    printf("b variable%d\n", b);
    printf("c variable%d\n", c);
    printf("Hasil a di kali b di bagi c adaalah %.2f\n", hasil);

    return 0;
}