// RTPG_9230: vars=3 stmts=11
#include <stdlib.h>
void test_func(void) {
    int b96 = 72;
    int cur45 = 54873;
    int res31 = 9722;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 12; i++) {
        b96 = res31 - 90;
        b96 = b96 - 5;
        b96 = b96 % cur45;
        cur45 = res31;
        cur45 = b96 + res31;
        res31 = b96 + -7;
        cur45 = res31 + 13180;
        b96 = b96 + 4;
        b96 = b96 % res31;
        cur45 = b96;
        b96 = b96 + res31;
        darr[i] = res31;
    }
    free(darr);
}
int main() { test_func(); return 0; }

