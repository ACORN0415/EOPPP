// RTPG_4257: vars=10 stmts=4
#include <stdlib.h>
void test_func(void) {
    int cur1 = 22;
    int acc31 = -7;
    int dat3 = 6;
    int val87 = 2674;
    int v44 = 0;
    int acc4 = 0;
    int x34 = 29771;
    int lo90 = 0;
    int sum50 = 49;
    int dat30 = 0;
    int *ptr = &sum50;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 28; i++) {
        sum50 = acc31 & dat3;
        x34 = acc4 - dat3;
        dat3 = v44 & acc31;
        cur1 = acc4 - sum50;
        *ptr = *ptr + 5;
        darr[i] = v44;
    }
    free(darr);
}
int main() { test_func(); return 0; }

