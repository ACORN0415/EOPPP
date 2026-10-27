// RTPG_8269: vars=5 stmts=12
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int b19 = 17234;
    int z33 = 15;
    int x61 = 23;
    int out78 = 47214;
    int v42 = 64;
    int *ptr = &x61;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        out78 = xn[i];
        z33 = z33 + b19;
        out78 = x61 + v42;
        z33 = b19;
        b19 = out78 - x61;
        out78 = out78 - 2;
        v42 = v42 - 3;
        out78 = b19 - x61;
        b19 = b19 - 4;
        x61 = x61 + x61;
        x61 = x61 - 4;
        b19 = v42;
        b19 = out78 + out78;
        *ptr = *ptr + 4;
        darr[i] = b19;
        yo[i] = out78;
    }
    free(darr);
}
int main() { test_func(); return 0; }

