// RTPG_8225: vars=4 stmts=4
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int cur32 = 83;
    int out40 = 64987;
    int out0 = 37;
    int acc23 = 3;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 53668;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        out0 = xn[i];
        cur32 = cur32 - out0;
        out40 = out0 * 78;
        out40 = out40 + out0;
        out0 = cur32 * 3;
        darr[i] = out40;
        if (cur32 > -5) {
        out0 = out40;
        }
        yo[i] = cur32;
    }
    free(darr);
}
int main() { test_func(); return 0; }

