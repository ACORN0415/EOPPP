// RTPG_5625: vars=3 stmts=7
#include <stdlib.h>
void test_func(void) {
    int prev0 = 17;
    int val92 = 52890;
    int c17 = 5;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 96; i++) {
        val92 = prev0 + val92;
        c17 = c17 + prev0;
        val92 = prev0 + val92;
        prev0 = prev0;
        c17 = c17 + 2;
        val92 = val92 - c17;
        prev0 = val92;
        darr[i] = val92;
        if (c17 < 21) {
        val92 = c17 - c17;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

