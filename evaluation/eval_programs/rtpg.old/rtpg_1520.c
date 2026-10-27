// RTPG_1520: vars=9 stmts=5
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int out77 = 3;
    int tmp30 = 7;
    int cnt47 = -12;
    int cnt81 = 93;
    int hi83 = 18;
    int z73 = 10;
    int lo18 = 62;
    int v32 = 78;
    int b89 = -48;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        z73 = xn[i];
        tmp30 = cnt81 + b89;
        lo18 = lo18 + 3;
        b89 = out77 + v32;
        cnt47 = cnt47 + -3;
        cnt47 = tmp30 - cnt81;
        darr[i] = z73;
        if (lo18 != 85) {
        b89 = out77 - 53531;
        }
        yo[i] = v32;
    }
    free(darr);
}
int main() { test_func(); return 0; }

