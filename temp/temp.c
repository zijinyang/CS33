#include <stdio.h>

#define TMax  0x7FFFFFFF  //  2147483647
#define TMin  0x80000000  // -2147483648

int main() {
    int x,y;
    u_int32_t ux, uy;
    for(x = TMin; x != TMax; x++) {
        if(x - x != (~x + 1) + x){
            printf("Error found: x = %d, y = %d\n", x, y);
            printf("x - y = %d\n", x - y);
            printf("(~y + 1) + x = %d\n", (~y + 1) + x);
            printf("ux = %u, uy = %u\n", ux, uy);
            return 1;
        }
    }
    printf("No errors found.\n");
    return 0;
}