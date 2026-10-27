// RTPG_8768: vars=8 stmts=3
#include <stdlib.h>
void test_func(void) {
    int prev98 = 4;
    int x2 = 51;
    int cur95 = 16528;
    int dat84 = 2885;
    int prev71 = 2;
    int cnt9 = 39;
    int out34 = 1370;
    int prev81 = 49421;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 92; i++) {
        prev71 = x2 + out34;
        dat84 = cnt9;
        out34 = out34 + prev71;
        darr[i] = x2;
    }
    free(darr);
}
int main() { test_func(); return 0; }

