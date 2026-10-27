// RTPG_7076: vars=5 stmts=3
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int a16 = 3;
    double sum3 = 67.17;
    int out13 = 4;
    int z95 = 88;
    int hi62 = 72;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 0;
    int sv0 = 0;
    int h1 = 69;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        hi62 = xn[i];
        a16 = out13 + hi62;
        out13 = hi62 * 3;
        z95 = a16 - out13;
        darr[i] = hi62;
        if (sum3 >= 29) {
        sum3 = z95 - a16;
        }
        yo[i] = a16;
    }
    free(darr);
}
int main() { test_func(); return 0; }

