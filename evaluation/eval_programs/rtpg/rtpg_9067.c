// RTPG_9067: vars=6 stmts=5
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int prev62 = 1642;
    int b15 = 30;
    int x28 = -6;
    int prev43 = 7;
    int tmp45 = 8;
    int c80 = 70;
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
        tmp45 = tmp45 + 46;
        c80 = prev43 * -24;
        x28 = b15 - c80;
        x28 = x28;
        c80 = c80 - 4;
        darr[i] = tmp45;
        yo[i] = tmp45;
    }
    free(darr);
}
int main() { test_func(); return 0; }

