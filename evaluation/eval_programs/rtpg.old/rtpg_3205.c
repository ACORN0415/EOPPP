// RTPG_3205: vars=5 stmts=12
#include <stdlib.h>
void test_func(void) {
    int hi63 = 67;
    int c30 = 46;
    int lo83 = 25697;
    int res93 = 40652;
    int x1 = 35;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 5; i++) {
        lo83 = hi63 + c30;
        res93 = x1 - hi63;
        x1 = c30 + x1;
        hi63 = lo83;
        c30 = lo83 + -3;
        hi63 = x1;
        x1 = hi63;
        lo83 = hi63 - 25;
        hi63 = c30;
        x1 = res93;
        hi63 = hi63;
        hi63 = hi63 - 2;
        darr[i] = res93;
    }
    free(darr);
}
int main() { test_func(); return 0; }

