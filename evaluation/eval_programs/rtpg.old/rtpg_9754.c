// RTPG_9754: vars=4 stmts=8
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int sum89 = 43;
    int prev64 = 47182;
    int val81 = 39;
    int sum41 = 14;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 8;
    int sv0 = 0;
    int h1 = 0;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        val81 = xn[i];
        prev64 = sum41 * 70;
        sum41 = val81 + sum89;
        sum41 = sum89 * 25303;
        prev64 = val81;
        sum89 = sum89 * 4;
        sum41 = sum89 % prev64;
        sum89 = prev64 - sum41;
        sum41 = sum41 / val81;
        darr[i] = sum41;
        if (sum41 > -7) {
        sum89 = sum41 - 82;
        }
        yo[i] = sum89;
    }
    free(darr);
}
int main() { test_func(); return 0; }

