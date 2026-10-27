// RTPG_2943: vars=8 stmts=3
#include <stdlib.h>
void test_func(void) {
    int cnt92 = 1;
    int c0 = 57336;
    int z6 = 34;
    int a17 = -3;
    int acc83 = 10;
    int acc87 = 7;
    int hi42 = 8;
    int z31 = 57880;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 53; i++) {
        c0 = hi42 - -25;
        c0 = hi42;
        acc87 = acc87 + 5;
        darr[i] = z31;
    }
    free(darr);
}
int main() { test_func(); return 0; }

