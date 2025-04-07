#include <stdio.h>

struct four_bit_int {
    unsigned int value : 4;
};

int main() {
    struct four_bit_int x = 1011;
    struct four_bit_int y = 1111;
    struct four_bit_int z = x + y;
    printf("The sum of %d and %d is %d\n", x, y, z);
    return 0;
}