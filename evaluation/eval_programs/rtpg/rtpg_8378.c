// RTPG_8378: vars=5 stmts=12
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int b19 = 17234;
    int x61 = 15;
    int out78 = 23;
    int z33 = 47214;
    int v42 = 64;
    int *ptr = &out78;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        z33 = xn[i];
        x61 = x61 + b19;
        z33 = out78 + v42;
        x61 = b19;
        b19 = z33 - out78;
        z33 = z33 - 2;
        v42 = v42 - 3;
        z33 = b19 - out78;
        b19 = b19 - 4;
        out78 = out78 + out78;
        out78 = out78 - 4;
        b19 = v42;
        b19 = z33 + z33;
        *ptr = *ptr + 4;
        darr[i] = b19;
        yo[i] = z33;
    }
    free(darr);
}
int main() { test_func(); return 0; }

