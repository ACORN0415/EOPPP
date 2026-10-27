// RTPG_3310: vars=9 stmts=3
#include <stdlib.h>
void test_func(void) {
    int y87 = -46;
    int val53 = 3;
    int res29 = 9;
    int acc69 = 0;
    int dat84 = 40248;
    int tmp81 = 19;
    int y5 = 19370;
    int val58 = 3;
    int z57 = 6;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 92; i++) {
        y5 = val58 + acc69;
        z57 = y5;
        val58 = y5 - y87;
        darr[i] = acc69;
    }
    free(darr);
}
int main() { test_func(); return 0; }

