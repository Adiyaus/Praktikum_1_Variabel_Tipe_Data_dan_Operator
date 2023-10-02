#include <stdio.h>

int main() {
    int a = 9;
    int b = 5;
    int x = 8;
    int y = 8;

    int sisa_bagi_AB = a % b;
    int sisa_bagi_XY = x % y;

    printf("a variable %d\n", a);
    printf("b variable %d\n", b);
    printf("x variable %d\n", x);
    printf("y variable %d\n", y);
    printf("Total sisa bagi a dibagi b: %d\n", sisa_bagi_AB);
    printf("Total sisa bagi x dibagi y: %d\n", sisa_bagi_XY);

    return 0;
}