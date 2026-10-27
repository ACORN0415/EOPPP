// RTPG_8895: vars=6 stmts=5
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int c80 = 1642;
    int tmp45 = 30;
    int x28 = -6;
    int prev43 = 7;
    int b15 = 8;
    int prev62 = 70;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 19;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int h2 = 46508;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        x28 = xn[i];
        b15 = b15 + 46;
        prev62 = prev43 * -24;
        x28 = tmp45 - prev62;
        x28 = x28;
        prev62 = prev62 - 4;
        darr[i] = b15;
        yo[i] = b15;
    }
    free(darr);
}
int main() { test_func(); return 0; }

