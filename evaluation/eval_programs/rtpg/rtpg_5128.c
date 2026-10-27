// RTPG_5128: vars=3 stmts=9
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int out82 = 8;
    int sum48 = 43249;
    int y99 = 100;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        y99 = xn[i];
        out82 = out82 - y99;
        sum48 = sum48 - out82;
        out82 = sum48;
        y99 = sum48 - out82;
        out82 = out82;
        y99 = y99 + sum48;
        y99 = sum48;
        out82 = out82 - out82;
        sum48 = sum48 - y99;
        darr[i] = out82;
        yo[i] = sum48;
    }
    free(darr);
}
int main() { test_func(); return 0; }

