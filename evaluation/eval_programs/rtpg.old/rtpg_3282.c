// RTPG_3282: vars=4 stmts=11
#include <stdlib.h>
void test_func(void) {
    int x39 = 83;
    int val30 = 7;
    int tmp39 = -25;
    int acc98 = 5;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 40742;
    int sv0 = 0;
    int h1 = 9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 50; i++) {
        x39 = acc98 * 41923;
        tmp39 = x39 + acc98;
        acc98 = acc98 * 92;
        val30 = tmp39 * 6;
        x39 = acc98 * 52;
        val30 = acc98;
        val30 = tmp39 - val30;
        x39 = x39 * 1;
        tmp39 = val30 + 88;
        tmp39 = tmp39 + 96;
        acc98 = acc98 + acc98;
        darr[i] = x39;
    }
    free(darr);
}
int main() { test_func(); return 0; }

