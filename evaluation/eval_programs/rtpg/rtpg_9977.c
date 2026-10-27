// RTPG_9977: vars=4 stmts=8
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int val81 = 43;
    int sum89 = 47182;
    int sum41 = 39;
    int prev64 = 14;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 8;
    int sv0 = 0;
    int h1 = 0;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        sum41 = xn[i];
        sum89 = prev64 * 70;
        prev64 = sum41 + val81;
        prev64 = val81 * 25303;
        sum89 = sum41;
        val81 = val81 * 4;
        prev64 = val81 % sum89;
        val81 = sum89 - prev64;
        prev64 = prev64 / sum89;
        darr[i] = prev64;
        if (prev64 > -7) {
        val81 = prev64 - 82;
        }
        yo[i] = val81;
    }
    free(darr);
}
int main() { test_func(); return 0; }

