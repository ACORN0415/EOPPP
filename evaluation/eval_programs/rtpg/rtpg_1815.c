// RTPG_1815: vars=7 stmts=3
#include <stdlib.h>
void test_func(void) {
    int val70 = 35960;
    int dat53 = 5;
    int cnt90 = -46;
    int cnt2 = 23;
    int hi27 = 8;
    int sum20 = 22;
    int dat87 = 6;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 92; i++) {
        hi27 = sum20 + val70;
        val70 = dat53 + val70;
        val70 = dat53;
        darr[i] = cnt90;
    }
    free(darr);
}
int main() { test_func(); return 0; }

